#include <iostream>
using namespace std;


int main(){
    char a[100];
    cin.getline(a, 100);
    bool flag=false;
    int index=0;
    for(int i=1;i<strlen(a);i++){
        if(a[i]==a[index]){
            continue;
        }
        else{
            index++;
            a[index]=a[i];
        }
    }
    index++;
    a[index]='\0';
    cout<<a;
    return 0;
}

