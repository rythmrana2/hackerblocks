#include<iostream>
using namespace std;

int SumOfFirstNNumbers(int n){
    return (n*(n+1))/2;
}

int main(){
    int number;
    cout<<"enter the numebr\n";
    cin>>number;
    cout<<"the answer is "<<SumOfFirstNNumbers(number)<<"\n";
    return 0;
}