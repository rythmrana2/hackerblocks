#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n];
    int value=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=value;
            value++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int startRow=0, endRow=n-1, startCol=0, endCol=n-1;
    while(startRow<endRow && startCol<endCol){
        int temp[n];
        for(int i=startCol;i<=endCol;i++){
            temp[i]=a[startRow][i];
        }
        for(int i=startRow;i<=endRow;i++){
            a[startRow][i]=a[i][endCol];
        }
        for(int i=endCol;i>=startCol;i--){
            a[endCol-(i-startCol)][endCol]=a[endRow][i];
        }
        for(int i=endRow;i>=startRow;i--){
            a[endRow][i]=a[i][startCol];
        }
        for(int i=startCol;i<=endCol;i++){
            a[endRow-(i-startCol)][startCol]=temp[i];
        }
        startCol++;
        endCol--;
        startRow++;
        endRow--;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}