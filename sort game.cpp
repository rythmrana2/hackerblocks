// sort game.cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool compare(pair<string, int>a, pair<string, int>b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    else{
        return a.second>b.second;
    }
}
int main(){
    int x, n;
    cin>>x;
    cin>>n;
    pair<string, int> a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        cin>>a[i].second;
    }
    int i=0;
    int j=0;
    while(j<n){
        if(a[j].second<x){

        }
        else{
            if(i!=j){
                a[i]=a[j];
            }
            i++;
        }
        j++;
    }
    sort(a, a+i, compare);
    for(int ind=0;ind<i;ind++){
        cout<<a[ind].first<<" "<<a[ind].second<<endl;
    }
    return 0;
}
