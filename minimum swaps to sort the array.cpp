#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    pair<int, int> arrayPair[n];

    for(int i=0;i<n;i++){
        arrayPair[i].first=a[i];
        arrayPair[i].second=i;
    }

    sort(arrayPair, arrayPair+n);

    int i=0;
    while(i<n){
        if(arrayPair[i].second!=i){
            cout<<"swapped ("<<arrayPair[i].first<<","<<arrayPair[arrayPair[i].second].first<<") at positions "<<i<<","<<arrayPair[i].second<<endl;
            swap(arrayPair[i], arrayPair[arrayPair[i].second]);
            count++;
        }
        else{
            i++;
        }
    }

    cout<<count;
    return 0;
}