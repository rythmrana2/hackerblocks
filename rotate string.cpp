// rotate string.cpp
#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    cin.ignore();
    char a[100];
    cin.getline(a, 100);
    int temp=a[0];
    int temp2;
    while(n--){
        for(int i=1;i<strlen(a);i++){
            temp2=a[i];
            a[i]=temp;
            temp=temp2;
        }
        a[0]=temp;
    }
    cout<<a;
    return 0;
}

