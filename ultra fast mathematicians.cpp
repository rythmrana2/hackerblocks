// ultra fast mathematicians.cpp
#include <iostream>
#include <cstring>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t){
        char a[101];
        char b[101];
        cin>>a;
        cin>>b;
        for(int i=0;i<strlen(a);i++){
            a[i]=((a[i]-'0')^(b[i]-'0'))+'0';
        }
        cout<<a<<endl;
        t--;
    }
    return 0;
}

