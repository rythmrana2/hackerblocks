// sum of two arrays.cpp
#include <iostream>
using namespace std;


int main(){
    int m, n;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int carry=0;
    int differenceInLength=0;
    if(m>n){
        differenceInLength=m-n;
        for(int i=m-1;i>=differenceInLength;i--){
            int number = a[i]+b[i-differenceInLength]+carry;
            a[i]=number%10;
            carry=number/10;
        }
        if(carry){
            cout<<carry<<", ";//we can directly print carry as carry can never be more thana digit incase of addition.
        }
        for(int i=0;i<m;i++){
            cout<<a[i]<<", ";
        }
    }
    else{
        differenceInLength=n-m;
        for(int i=n-1;i>=differenceInLength;i--){
            int number = a[i-differenceInLength]+b[i]+carry;
            b[i]=number%10;
            carry=number/10;
        }
        if(carry){
            cout<<carry<<", ";//we can directly print carry as carry can never be more thana digit incase of addition.
        }
        for(int i=0;i<n;i++){
            cout<<b[i]<<", ";
        }
    }
    cout<<"END";
    return 0;
}

