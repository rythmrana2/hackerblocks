// unique number 3 more optimized.cpp

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ones=0;
    int twos=0;
    int NotThrees;
    for(int i=0;i<n;i++){
        //twos will hold the bits coming for second time 
        twos = twos | (ones & a[i]);

        //ones will hold numbers coming for first time
        ones = (ones ^ a[i]);

        //not three will hold not of bits coming for third time, and this will be used to remove these bits from 
        //ones and twos
        NotThrees = ~(ones&twos);
        ones= (ones&NotThrees);
        twos = (twos&NotThrees);
    }
    cout<<ones;
    return 0;
}
