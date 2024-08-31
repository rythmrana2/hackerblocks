// binary search using recursion.cpp
#include<iostream>
using namespace std;
int counter=0;
//remember, break the bigger problem into smaller ones - so it can be calc mid and check at mid right now
//if not found then decide which smaller part of array to look in and let recursion check in them
int binarySearch(int* a, int start, int end, int key){
    //base case
    if(start>end) return -1;

    //recurrence relation
    int mid = start + (end-start)/2;
    if(a[mid]==key){
        return mid;
    }
    else if(a[mid]>key){
        return binarySearch(a, start, mid-1, key);
    }
    else{
        return binarySearch(a, mid+1, end, key);
    }

}
int main(){
    int n=10;
    int a[10]={ 0,1,2,3,4,5,6,17,18,19 };
    int key;
    cin>>key;
    cout<<binarySearch(a, 0, n-1, key);
    return 0;
}