#include <iostream>
using namespace std;


int main(){
    long long int n;
    cin>>n;
    long long int answer=0;
    long long int multiplier=1;
    if(n==0){
        cout<<5;
        return 0;
    }
    while(n){
        int digit = n%10;
        answer += digit==0?5*multiplier:(digit)*multiplier;
        n/=10;
        multiplier*=10;
    }
    cout<<answer;
    return 0;
}

