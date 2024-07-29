#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int row=-1;
    for(int col=0;col<m;col++){
        if(col&1){
            row--;
        }
        else{
            row++;
        }
        while(row>=0 && row<n){
            cout<<a[row][col]<<" ";
            if(col&1){
                row--;
            }
            else{
                row++;
            }
        }
        cout<<endl;
    }
    return 0;
}