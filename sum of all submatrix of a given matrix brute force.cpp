// sum of all sub matrices of a given matrix brute force.cpp
#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=i;k<n;k++){
                for(int l=j;l<n;l++){
                    //now i have got the starting and ending points for all the sub matrices therefore i can 
                    //loop over them and add to the sum.
                    for(int row = i;row<=k;row++){
                        for(int col=j;col<=l;col++){
                            sum+=a[row][col];
                        }
                    }
                }
            }
        }
    }
    cout<<sum;
    return 0;
}