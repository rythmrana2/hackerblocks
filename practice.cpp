#include<iostream>
#include<string.h>
using namespace std;

void printarray(int a[4], int n){
    cout<<a;
    cout<<a[7];
}

int main(){
    int a[]={ 1,2,3,4 };

    printarray(a, 4);
    return 0;
}