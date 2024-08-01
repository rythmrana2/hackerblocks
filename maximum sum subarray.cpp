// maximum sum subarray.cpp
#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sum=0;
        int maxS=INT_MIN;
        for(int i=0;i<n;i++){
            if(sum+a[i]>0){
                sum+=a[i];
                maxS=max(sum, maxS);
            }
            else{
                sum=0;
            }
        }
        cout<<maxS<<endl;
        t--;
    }
    return 0;
}