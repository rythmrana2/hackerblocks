#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    int operations[q];
    for(int i=0;i<q;i++){
        cin>>operations[i];
    }
    int next_state[n];
    int count = 0;
    int mod = 1000000007;
    while(q){
        for(int i=0;i<n;i++){
            next_state[i]=((long long)(a[i]+a[(i+n-operations[count])%n]))%mod;
        }
        for(int i=0;i<n;i++){
            a[i]=next_state[i];
        }
        count++;
        q--;
    }
    int sum =0;
    for(int i=0;i<n;i++){
        sum=((long long)(sum+a[i]))%mod;
    }
    cout<<sum;
    return 0;
}