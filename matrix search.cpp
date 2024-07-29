#include <iostream>
using namespace std;


int main(){
    int m, n, key;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cin>>key;
    int i=0, j=n-1;
    while(i<m && j>-1){
        if(a[i][j]==key){
            cout<<1;
            return 0;
        }
        else if(a[i][j]>key){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<0;
    return 0;
}

