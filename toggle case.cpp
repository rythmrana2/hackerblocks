// toggle case.cpp
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char a[1001];
    cin.getline(a, 1001);
    int count=0;
    int i=0;
    for(;i<strlen(a)-1;i++){
        if(a[i+1]!=a[i]){
            count++;
            if(count){
                cout<<a[i]<<count;
            }
            else{
                cout<<a[i];
            }
            count=0;
        }
        else{
            count++;
        }
    }
    if(count==0){
        cout<<a[i]<<1;
    }
    else{
        cout<<a[i]<<++count;
    }
    return 0;
}

