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
    int start_row=0, start_col=0;
    int end_row=n, end_col=m;
    int count =n*m;
    while(count){
        for(int j=start_col;j<end_col && count;j++){
            cout<<a[start_row][j]<<" ";
            count--;
        }
        start_row++;
        for(int i= start_row;i<end_row && count;i++){
            cout<<a[i][end_col-1]<<" ";
            count--;
        }
        end_col--;
        for(int j=end_col-1;j>=start_col && count;j--){
            cout<<a[end_row-1][j]<<" ";
            count--;
        }
        end_row--;
        for(int i=end_row-1;i>=start_row && count;i--){
            cout<<a[i][start_col]<<" ";
            count--;
        }
        start_col++;
    }
    return 0;
}