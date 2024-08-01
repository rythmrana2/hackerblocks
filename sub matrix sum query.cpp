// sub matrix sum query.cpp
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int q;
    cin>>q;
    pair<pair<int, int>, pair<int, int>> query[q];
    for(int i=0;i<q;i++){
        cin>>query[i].first.first;
        cin>>query[i].first.second;
        cin>>query[i].second.first;
        cin>>query[i].second.second;
    }
    //solution below - 2*n^2 + q
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++)
        {
            a[i][j]+=a[i-1][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++)
        {
            a[i][j]+=a[i][j-1];
        }
    }
    for(int i=0;i<q;i++){
        int sum;
        if(query[i].first.first!=0 and query[i].first.second!=0){
            sum=a[query[i].second.first][query[i].second.second] - a[query[i].first.first-1][query[i].second.second] - a[query[i].first.first][query[i].second.second-1] + a[query[i].first.first-1][query[i].second.second-1];
        }
        else if(query[i].first.first!=0){
            sum=a[query[i].second.first][query[i].second.second] - a[query[i].first.first-1][query[i].second.second];
        }
        else if(query[i].first.second!=0){
            sum=a[query[i].second.first][query[i].second.second] - a[query[i].first.first][query[i].second.second-1];
        }
        else{
            sum=a[query[i].second.first][query[i].second.second];
        }
        cout<<sum<<endl;
    }

    return 0;
}