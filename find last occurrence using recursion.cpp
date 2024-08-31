// find last occurrence using recursion.cpp
#include<iostream>
#include<cmath>
using namespace std;

//find first occurrence of key using recursion
//divide the bigger problem into smaller problems
//bigger problem - to find last occurrence in whole array
//smaller - to find in current element
//in my solutions - the stack keeps filling up with recursion memory , in cbs solution it doesn't happen
int findLastOccurrenceUsingRecursionIt(int* a, int i, int key, int n){
    //base case
    if(i==n)return -1;

    //recurrence call and return 
    int location = findLastOccurrenceUsingRecursionIt(a, i+1, key, n);
    if(location!=-1){
        return location;
    }
    else if(a[i]==key){
        return i;
    }
    else{
        return -1;
    };

}
//coding blocks solution
int findLastOccurrenceUsingRecursion(int* a, int key, int n){
    //base case
    if(n==0)return -1;

    //recurrence call and return 
    int location = findLastOccurrenceUsingRecursion(a+1, key, n-1);
    if(location!=-1){
        return location+1;
    }
    else if(a[0]==key){
        return 0;
    }
    else{
        return -1;
    }
}

//coding blocks solution - start directly from back - this method saves memory pile up because of recursive calls
// as it returns the moment it finds the key
int findLastOccurrenceUsingRecursionItCB(int* a, int i, int key, int n){
    //base case
    if(i==-1)return -1;

    //recurrence call and return 
    if(a[i]==key){
        return i;
    }
    else{
        return findLastOccurrenceUsingRecursionItCB(a, i-1, key, n);
    }

}
int main(){
    int n = 10;
    int a[]={ 1,2,3,6,5,6,7,1,9,10 };
    int key;
    cin>>key;
    cout<<findLastOccurrenceUsingRecursionIt(a, 0, key, n)<<endl;
    cout<<findLastOccurrenceUsingRecursion(a, key, n)<<endl;
    cout<<findLastOccurrenceUsingRecursionItCB(a, n-1, key, n);
    return 0;
}