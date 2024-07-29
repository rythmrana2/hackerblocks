#include <iostream>
#include<cmath>
using namespace std;


int main(){
    int n;
    cin>>n;
    //made a small mistake in this question, instead of summing prime factros digits , i was summing prime factors which is wrong
    //i was taking an array of size n , whta this was dong was, n has upper limit till int_max and creating a array of this size was requiring more memory than either the program can have or than the available memory or rom in the computer therefore it was giving segmentation fault therefore using 1000 size worked.
    //better would be to not store the prime factorrs and just directly sum its digits inthe sum to not use such large space.
    //a way more optimized answer is also written by me for this question.
    int primeFactors[1000];
    int currentIndex=0;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            int div1=i;
            bool isPrime=true;
            for(int j=2;j<=sqrt(div1);j++){
                if(div1%j==0){
                    isPrime=false;
                    break;
                }
            }
            int poweredNumber = div1;
            if(isPrime){
                int count=0;
                while(n%poweredNumber==0){
                    count++;
                    poweredNumber*=div1;
                }
                while(count){
                    primeFactors[currentIndex]=div1;
                    count--;
                    currentIndex++;
                }
                poweredNumber/=div1;
            }
            int div2 = n/poweredNumber;
            bool isPrime2=true;
            for(int j=2;j<=sqrt(div2);j++){
                if(div2%j==0){
                    isPrime2=false;
                    break;
                }
            }
            int poweredNumber2 = div2;
            if(isPrime2){
                int count=0;
                while(n%poweredNumber2==0){
                    count++;
                    poweredNumber2*=div2;
                }
                while(count){
                    primeFactors[currentIndex]=div2;
                    count--;
                    currentIndex++;
                }
            }
        }
    }
    int NumberSum=0;
    while(n){
        int digit = n%10;
        NumberSum+=digit;
        n=n/10;
    }
    int primeSum=0;
    for(int i=0;i<currentIndex;i++){
        while(primeFactors[i]){
            int digit = primeFactors[i]%10;
            primeSum+=digit;
            primeFactors[i]/=10;
        }
    }
    if(primeSum==NumberSum){
        cout<<1;
    }else{
        cout<<0;
    }
    return 0;
}

