// find first occurrence using recursion.cpp
#include<iostream>
#include<cmath>
using namespace std;

//find first occurrence of key using recursion
//divide the bigger problem into smaller problems
//bigger problem - to find in whole array
//smaller - to find in current element
int findOccurrenceUsingRecursion(int* a, int i, int key, int n){
    //base case
    if(i==n)return -1;

    //recurrence call and return 
    if(a[i]==key)return i;
    return findOccurrenceUsingRecursion(a, i+1, key, n);
}
//coding blocks solution
int findOccurrenceUsingRecursionCB(int* a, int key, int n){
    //base case
    if(n==0)return -1;

    //recurrence call and return 
    if(a[0]==key)return 0;
    int location = findOccurrenceUsingRecursionCB(a+1, key, n-1);
    return (location==-1?-1:location+1);
}
int main(){
    int n = 10;
    int a[]={ 1,2,3,4,5,6,7,18,9,10 };
    int key;
    cin>>key;
    cout<<findOccurrenceUsingRecursion(a, 0, key, n);
    return 0;
}