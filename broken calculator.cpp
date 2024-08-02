// broken calculator.cpp
#include <iostream>
using namespace std;
#define maxSize 2000
//coding blocks solution
//this solution is all about basic maths, instead of using computer to do the calculation, just use the basic way of
//how numbers are multiplied in mathematics and use it in the same ay in code. i did think about how numbers are 
//multiplied in maths but didn't think i could have done the same with code. this is a coding blocks solution
//why we took max size as 2000 is , the top limit of n can be 500 so according to my thinking imagine 500! is same
//as 500^500 500 is 3 letters, if i multiply by itself it can max be 6 letters therefroe 500 multiplied to itself 500 times
//can max be 3*500 is 1500 digits therefore defining max as 2000.
int multiply(int* result, int resultSize, int i){
    int carry=0;
    for(int j=0;j<=resultSize;j++){
        int number = result[j]*i+carry;
        result[j]=number%10;
        carry=number/10;
    }
    while(carry){
        resultSize++;
        result[resultSize]=carry%10;
        carry/=10;
    }
    return resultSize;
}
void factorial(int n){
    int result[maxSize];
    int resultSize=1;
    result[0]=1;
    for(int i=2;i<=n;i++){
        resultSize = multiply(result, resultSize, i);
    }
    for(int i=resultSize;i>=0;i--){
        cout<<result[i];
    }
    return;
}
int main(){
    int n;
    cin>>n;
    factorial(n);
    return 0;
}
