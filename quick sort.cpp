// quick sort.cpp
#include<iostream>
using namespace std;
// The bigger problem was to sort the complete array using choose pivot and create partition
// The current problem is to choose the pivot and create the partitions and place the pivot at its correct location
//and the partitions after and before it.
// The smaller problem that is done by recursion is to sort the smaller arrays that we assign recursion to do.
//this quickSort approach is mine - here the wrong thing i am doing is in every function call , i am placing elements
//bigger than pivot by moving all elements after that element till pivot by a step and than placing the element after pivot
//this step itself is very time consuming, so if i check my whole codes time complexity, for every element, we are diving
//the array into two halves and surfing this half array so it is n elements and surfing into half elements n time meaning nlogn,
//now in my algo, for this logn iteration on array , i am also moving the bigger elements after pivot by sliding all elements
//by a step, this is another logn iteration inside the logn surfing i was doing therefore my solution is n*(logn^2) solution. however quicksort is nlogn algo
//so the correct approach is what coding blocks implemented - 
void quickSortCB(int* a, int start, int end){
    //base case - the base case is when one element is left, as we are using sliding to create the separation
    //so even when two elements are there we can slide and place the pivot at correct location, therefore when one element
    //is left it is already at correct location so we will return from there.
    if(start>=end) return;
    //recurrence relation

    //cb is keeping two segments , one is segment 1 marked by i and other is segment 2 marked by j-1, if 
    //segment 2 needs to expand just do j++; if i needs to expand, just do i++ swap i and j and do j++. then after doing
    //this surfing of logn elements, at last swap the first element of segment 2 and pivot element to put pivot at correct
    //  place. therefore the time complexity of this algo is n times surf logn elements therefore O(nlogn) and space
    //  complexity is O(1). therefore this solution is extremely better than mine.
    int pivot = end;
    int i=start-1;
    int j=start;
    while(j!=pivot){
        if(a[j]<=a[pivot]){
            i++;
            // int temp=a[i];
            // a[i]=a[j];
            // a[j]=temp;
            if(i!=j){
                //swapping only happens if both indexes are different lese it makes both 0.
                // a[i]=a[i]^a[j];
                // a[j]=a[i]^a[j];
                // a[i]=a[i]^a[j];
                a[i]+=a[j];
                a[j]=a[i]-a[j];
                a[i]-=a[j];
            }
        }
        j++;

    }
    //placing pivot at correct position
    i++;
    if(i!=j){
        a[i]=a[i]^a[j];
        a[j]=a[i]^a[j];
        a[i]=a[i]^a[j];
    }
    //now tht we have placed one element at the correct location , we will give the remaining elements to recursion to
    //get them placed at their correct locations
    quickSortCB(a, start, i-1);
    quickSortCB(a, i+1, end);
    //return solution
    return;
}

void quickSort(int* a, int start, int end){
    //base case - the base case is when one element is left, as we are using sliding to create the separation
    //so even when two elements are there we can slide and place the pivot at correct location, therefore when one element
    //is left it is already at correct location so we will return from there.
    if(start>=end) return;
    //recurrence relation
    int pivot = end;
    int i=start;
    while(i!=pivot){
        if(a[i]>a[pivot]){
            int temp = a[i];
            int j;
            for(j=i+1;j<=pivot;j++){
                a[j-1]=a[j];
            }
            a[j-1]=temp;
            pivot--;
        }
        else{
            i++;
        }
    }
    //now tht we have placed one element at the correct location , we will give the remaining elements to recursion to
    //get them placed at their correct locations
    quickSort(a, start, pivot-1);
    quickSort(a, pivot+1, end);
    //return solution
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
    quickSort(a, 0, n-1);
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
    quickSortCB(b, 0, n-1);
    cout<<"After:"<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}