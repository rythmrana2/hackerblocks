#include <iostream>
using namespace std;


int main(){
    long long int n;
    cin>>n;
    long long int answer=0;
    long long int multiplier=1;
    while(n){
        int digit = n%10;
        if(n<10 && digit==9){
            answer+=digit*multiplier;
        }else{
        answer += digit<5?digit*multiplier:(9-digit)*multiplier;
        }
        n/=10;
        multiplier*=10;
    }
    cout<<answer;
    return 0;
}

