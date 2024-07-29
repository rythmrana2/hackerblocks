#include <iostream>
using namespace std;


int main(){
    char a[100];
    cin.getline(a, 100);
    int i=0;
    int j=strlen(a)-1;
    while(i<j){
        if(a[i]==a[j]){
            i++;
            j--;
        }
        else{
            cout<<"not palindromic";
            return 0;
        }
    }
    cout<<"palindromic";
    return 0;
}

