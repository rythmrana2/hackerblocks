// bubble sort using recursion.cpp
#include<iostream>
using namespace std;
//break the bigger problem in to smaller problems  - bigger problem in this case is to sort the whole array, smaller problem
//in this case is to sort the current element and place it at its correct position, then sorting the remaining elements is
//is the work of recursion.
//as the bigger problem is to sort the complete array , the smaller problem will be to sort the current element, and not
//to just check the current and next element and sort the current element wrt to next element, that is a smaller problem of
//current smaller problem of sorting the current element in the array.
void bubbleSort(int* a, int n){
    //base case
    if(n==1)return;

    //recurrence relation
    for(int j=0;j<n-1;j++){
        if(a[j]>a[j+1]){
            a[j+1]+=a[j];
            a[j]=a[j+1]-a[j];
            a[j+1]=a[j+1]-a[j];
        }
    }
    bubbleSort(a, n-1);

    //return solution
    return;
}
int main(){
    int n=10;
    int a[]={ 1,0,5,2,9,6,7,4,3,8 };
    cout<<"Before:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    bubbleSort(a, n);
    cout<<"After:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}