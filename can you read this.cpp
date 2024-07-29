// can you read this.cpp
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[1001];
    cin>>a;
    for(int i=0;i<strlen(a);i++){
        if(a[i]>='A' && a[i]<='Z'){
            cout<<endl<<a[i];
        }
        else{
            cout<<a[i];
        }
    }

    return 0;
}