#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    while(n){
        int number;
        cin>>number;
         int oddSum = 0;
        int evenSum = 0;
        while(number){
            int digit = number%10;
            if(digit&1){
                oddSum+=digit;
            }else{
                evenSum+=digit;
            }
            number/=10;
        }
        if(oddSum%3==0 || evenSum%4==0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
        n--;
    }
    return 0;
}

