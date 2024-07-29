#include <iostream>
using namespace std;


int main(){
    int rowCount, colCount;
    cin>>rowCount>>colCount;
    int a[rowCount][colCount];
    for(int i=0;i<rowCount;i++){
        for(int j=0;j<colCount;j++){
            cin>>a[i][j];
        }
    }
    int row=0,col=0;
    while(row>=0 && col<colCount && row<rowCount && col>=0){
        while(row>=0 && col<colCount){
            cout<<a[row][col]<<" ";
            row--;
            col++;
        }
        if(col>=colCount){
            col--;
            row+=2;
        }else if(row<0){
            row++;
        }
        while(row<rowCount && col>=0){
            cout<<a[row][col]<<" ";
            row++;
            col--;
        }
        if(row>=rowCount){
            row--;
            col+=2;
        }else if(col<0){
            col++;
        }
    }
    return 0;
}

