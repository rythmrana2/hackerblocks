// isArraySortedUsingRecursion.cpp
#include<iostream>
#include<cmath>
using namespace std;

//the argument could also have been int * a
bool isArraySorted(int a[], int n){
    //base 
    if(n==1 || n==0) return true;

    //rec
    if(isArraySorted(a+1, n-1)&& a[0]<a[1]) return true;

    //return
    return false;
}
bool isArraySortedIterative(int a[], int n, int i){
    //base 
    if(i==n-1) return true;

    //rec
    if(isArraySortedIterative(a, n, i+1)&& a[i]<a[i+1]) return true;

    //return
    return false;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<boolalpha<<isArraySortedIterative(a, n, 0);
    return 0;
}