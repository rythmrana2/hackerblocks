// max sum sub matrix in row and col wise sorted matrix.cpp
//coding blocks solution
#include<iostream>
#include<climits>
#include<algorithm>
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
    //pre compute suffix sum
    for(int i=n-1;i>=0;i--){
        for(int j=n-2;j>=0;j--){
            a[i][j]+=a[i][j+1];
        }
    }
    for(int i=n-2;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            a[i][j]+=a[i+1][j];
        }
    }
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            maxSum=max(maxSum, a[i][j]);
        }
    }
    cout<<maxSum;
    return 0;
}