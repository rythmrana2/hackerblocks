#include <iostream>
#include<cmath>
using namespace std;


int main(){
    int n1,n2;
    cin>>n1>>n2;
    for(int number=n1;number<=n2;number++){
        int solution=0;
    int temp = number;
    int order=0;
    while(temp){
        temp/=10;
        order++;
    }
    temp=number;
    while(temp){
        int digit = temp%10;
        solution+= pow(digit,order);
        temp/=10;
    }
    if(solution==number){
        cout<<number<<endl;
    }
    }
    return 0;
}

