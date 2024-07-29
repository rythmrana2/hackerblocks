#include <iostream>
#include <cstring>
using namespace std;


int main(){
    char a[1001];
    cin.getline(a, 1001);
    int cnt=0;
    for(int i=0;i<strlen(a);i++){
        for(int j=i;j<strlen(a);j++){
            int i1=i;
            int j1=j;
            while(i1<=j1){
                if(a[i1]==a[j1]){
                    i1++;
                    j1--;
                }
                else{
                    break;
                }
            }
            if(i1>j1){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}

