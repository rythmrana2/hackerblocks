#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int m;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    int i;
    for(i=0;i<n;i++){
        if(m==a[i]){
            cout<<i;
            break;
        }
    }
    if(i==n){
        cout<<-1;
    }

}