#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin>>m>>n;
    int a[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int row=0;
    int col=0;
    int count=n*m;
    for(;count>0;){
        while(row>=0 && col<n){
            cout<<a[row][col]<<" ";
            col++;
            row--;
            count--;
        }
        if(col==n){
            col--;
            row++;
        }
        row++;
        while(col>=0 && row<m && count>0)
        {
            cout<<a[row][col]<<" ";
            col--;
            row++;
            count--;
        }
        if(row==m){
            row--;
            col++;
        }
        col++;
    }

    return 0;
}