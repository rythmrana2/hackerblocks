// odd even character.cpp
// max frequency character.cpp
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char a[1001];
    cin.getline(a, 1001);
    for(int i=0;i<strlen(a);i++){
        if(i&1){
            cout<<(char)(a[i]-1);
        }
        else{
            cout<<(char)(a[i]+1);
        }
    }
    return 0;
}

