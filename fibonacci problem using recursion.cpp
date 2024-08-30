// fibonacci problem using recursion.cpp
#include<iostream>
#include<cmath>
using namespace std;

int fibonacci(int n){
    //1. base case
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    //the above two base cases can also be combined into a single if statement using if(n==1 || n==0)return n;
    //2. recurrence relation
    int currentNumber = fibonacci(n-1) + fibonacci(n-2);
    //3. return solution
    return currentNumber;

    //the above two steps can be written together as return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n = 8;
    cout<<fibonacci(n);
    return 0;
}