// print all occurrences using recursion.cpp
#include<iostream>
#include<cmath>
using namespace std;
void printAllOccurrencesUsingRecursion(int* a, int n, int key, int i){
    //base case
    if(i==n)return;

    //recurrence relation
    if(a[i]==key) cout<<i<<" ";
    printAllOccurrencesUsingRecursion(a, n, key, i+1);
    return;
}
//we can even store these indices in a global array and maintain the global arrays vacant cell index using a global index 
//variable and store the data in the cell and increment the jth index pointer.
int main(){
    int n = 10;
    int a[]={ 1,2,3,6,5,6,7,1,9,10 };
    int key;
    cin>>key;
    printAllOccurrencesUsingRecursion(a, n, key, 0);
    return 0;
}