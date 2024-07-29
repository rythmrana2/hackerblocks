#include <iostream>
#include<cmath>
using namespace std;


int main(){
    string n;
    cin>>n;
    int order = n.length();
    int number = 0;
    int solution=0;
    int multiplier=1;
    for(int i=order-1;i>=0;i--){
        number+=(n[i]-'0')*multiplier;
        solution +=pow(n[i]-'0',order);
        multiplier*=10;
    }
    if(solution==number){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}

