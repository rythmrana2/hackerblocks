// money change problem.cpp
#include <iostream>
#include <cstring>
using namespace std;

//find hte minimum denominations in which the given money can be returned.
int main(){
    int n;
    cin>>n;
    int a[n];
    //array is sorted.
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int money;
    cin>>money;
    // we can first find the upper bound of the money
    // and from there we can take deduct the currency and again find upper bound for the 
    //remaining change and keep in doing these steps
    int count=0;
    while(money){
        int* currencyNeeded = upper_bound(a, a+n, money);
        count+=money/a[currencyNeeded-a-1];
        money %= a[currencyNeeded-a-1];
    }
    cout<<count;
    return 0;
}

