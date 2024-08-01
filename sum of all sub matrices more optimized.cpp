// sum of all sub matrices more optimized.cpp
#include<iostream>
using namespace std;


//in this approach, we will use pre computation to remove the inner two nested loops.
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            a[i][j]+=a[i][j-1];
        }
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]+=a[i-1][j];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=i;k<n;k++){
                for(int l=j;l<n;l++){
                    //now i have got the starting and ending points for all the sub matrices
                    //now to compute the sum of the sub matrix using the pre computed sum we just need to 
                    //subtract the outer matrix sum (0,0)=>(k,l) with inned matrices sum(0,0)=>(i,l)) and 
                    //((0,0)=>(k,j)) and if the inner matrix (0,0),(i-1,j-1) subtracted twice then add it once
                    if(i!=0 && j!=0){
                        sum+=a[k][l]-a[i-1][l] - a[k][j-1] + a[i-1][j-1];
                    }
                    else if(i!=0){
                        sum+=a[k][l] - a[i-1][l];
                    }
                    else if(j!=0){
                        sum+=a[k][l] - a[k][j-1];
                    }
                    else{
                        sum+=a[k][l];
                    }
                }
            }
        }
    }
    cout<<sum;
    return 0;
}