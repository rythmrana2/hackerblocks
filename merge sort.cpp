// merge sort.cpp
#include<iostream>
using namespace std;
// The bigger problem was to sort the complete array using divide and merge
// The current problem is to merge the two sorted halves into a resulting sorted array.
// The smaller problem that is done by recursion is to sort the smaller arrays that we assign recursion to do.
//this approach of mine has an issue - the time complexity of my algo is - for every n elemetns i am diving the array
//into halves, then surfing those halves, so for every n elements, i a surfing on logn elements, therefore it is
//nlogn however i am doing an additional step, when i find a smaller element in second array , i am moving the first 
//arrays elements by a step to place the element from second array at its correct position, this step is again iterating
//over logn elements inside the logn loop therefore my whole algo is n*(logn^2) time complexity however the space complexity
//is O(1). but the code wirtten by coding blocks is O(n*(2*logn)) in time (as it is supposed to be(they are taking logn more
// time to copy array a elements into array b and c)) and their space complexity is n elements are always to be stored,
//  and these n elements are stored in logn arrays(they are stored logn times), therefore O(nlogn). now you can
// choose which one is better saving time complexity or space complexity.
// coding blocks approach - 
void mergeSortCB(int* a, int start, int end){
    //base case
    if(start>=end){
        return;
    }

    //recurrence 
    int mid = start + (end-start)/2;
    int b[mid-start+1];
    int c[end-mid];
    int counter3=0;
    for(int i=start;i<=mid;i++){
        b[counter3]=a[i];
        counter3++;
    }
    int counter=0;
    for(int i=mid+1;i<=end;i++){
        c[counter]=a[i];
        counter++;
    }
    mergeSortCB(b, 0, counter3-1);
    mergeSortCB(c, 0, counter-1);
    //now that we have the merged halves, we will join the sorted arrays into a sorted whole.
    int i=0;
    int j=0;
    int counter2=0;
    while(i<counter3 && j<counter){
        if(b[i]<c[j]){
            a[counter2]=b[i];
            i++;
        }
        else{
            a[counter2]=c[j];
            j++;
        }
        counter2++;
    }
    while(j<counter){
        a[counter2]=c[j];
        counter2++;
        j++;
    }
    while(i<counter3){
        a[counter2]=b[i];
        counter2++;
        i++;
    }

    //returning the answer
    return;
}

void mergeSort(int* a, int start, int end){
    //base case
    if(start>=end){
        return;
    }

    //recurrence 
    int mid = start + (end-start)/2;
    mergeSort(a, start, mid);
    mergeSort(a, mid+1, end);
    //now that we have the merged halves, we will join the sorted arrays into a sorted whole.
    int j=start;
    int k=mid+1;
    //why we are stopping even if one array ends is , the remaining part of the array which is left assuming the second 
    //array would already be sorted according to the just before element, so if the just before element is swapped ,
    // then this last element will definitely be checked, and if the one before it is not swapped, then the one before will
    //again be checked by the next element in the first array, and if it again is not sorted, then that means , the one
    //before is at its correct location , and as this array half is already sorted, it means the last element of the 
    //second array is also sorted and at correct place. thats why even if one of the array finishes iteration, the whole
    //array is sorted.

    while(j!=mid+1 && k!=end+1){
        if(a[j]<=a[k]){
            j++;
        }
        else{
            int temp = a[k];
            for(int i = k-1;i>=j;i--){
                a[i+1]=a[i];
            }
            a[j]=temp;
            k++;
            mid++;
        }
    }
    //returning the answer
    return;
}
int main(){
    int a[]={ 1,0,5,2,9,6,7,4,3,8,-1,455,0 };
    int b[]={ 1,0,5,2,9,6,7,4,3,8,-1,455,0 };
    int n= sizeof(a)/sizeof(int);
    cout<<"Before:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    mergeSort(a, 0, n-1);
    cout<<"After:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Before:"<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    mergeSortCB(b, 0, n-1);
    cout<<"After:"<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}