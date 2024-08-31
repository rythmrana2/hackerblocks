// playing with integers.cpp
#include<iostream>
using namespace std;
string a[] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
void integerToString(int n){
    //base case
    if(n==0)return;
    //recurrence call
    int digit = n%10;
    integerToString(n/10);
    cout<<a[digit]<<" ";
    //return solution
    return;
}
int main(){
    int n;
    cin>>n;
    integerToString(n);
    return 0;
}