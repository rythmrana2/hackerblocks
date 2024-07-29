#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    // to know how many factors of a n number x will be in a number y's factorial simply do - 
    //floor of x/y + floor of x/y^2 + floor of x/y^3 .... until the floor of a particular fraction is 0.
    int denominator = 5;
    int count=0;
    while(n/denominator){
        count+= n/denominator;
        denominator*=5;
    }
    cout<<count;
    return 0;
}

