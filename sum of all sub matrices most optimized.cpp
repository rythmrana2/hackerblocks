// sum of all sub matrices most optimized.cpp
#include<iostream>
using namespace std;


//in this approach, we will use number of times a cell is supposed to be part of a sub matrix to get its
// share in the overall sum and do this for all the cells.
//coding blocks solution
//so the solution is  - for a particular cell we have to find the number of  submatrices it was a part of 
//and this we can know by figuring out that the top left corner of a particular matrix should be less than or
//equal to the index of the cell in consideration meaning , the i and j of the tl should be less thanequal to
//the i and j of the cell in consideration and similarly the i and j of the bottom right point should be
//greater than equal to the i and j of the cell and therefore the no of cells for suppose top left are supppose
//x and for bottom right are suppose y then the total number is x*y for that particular cell i,j.
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
            // the number of sub matrices is - 
            sum += a[i][j]*((i+1)*(j+1))*(n-i)*(n-j);
        }
    }
    cout<<sum;
    return 0;
}