// print increasing decreasing numbers using recursion.cpp
#include<iostream>
#include<cmath>
using namespace std;
//note - when return type is void, you dont need to write return in the function
//the only difference between the working of printInc and printDec is , how the recurrence relation is written
//in dec we first print and then go to the next function call
//in inc, we first go to the smaller func call , then print
//thats all the difference, and just this small difference produces such big differences in what we see.
void printDecNumbers(int n){
    //1. base case
    if(n==0) return;
    //2.recurrence relation
    cout<<n<<" ";
    printDecNumbers(n-1);
    //3.return solution
    return;
}
void printIncNumbers(int n){
    //1. base case
    if(n==0) return;
    //2.recurrence relation
    printIncNumbers(n-1);
    cout<<n<<" ";
    //3.return solution
    return;
}
//another way to create the inc numbers function would be -
//this is the iterator method using recursion
void printIncNumbers2(int n, int i){
    //base 
    if(i==n+1) return;

    //rec
    cout<<i<<" ";
    printIncNumbers2(n, i+1);

    //return
    return;
}
int main(){
    int n = 10;
    printDecNumbers(n);
    cout<<endl;
    printIncNumbers(n);
    cout<<endl;
    printIncNumbers2(n, 1);
    return 0;
}