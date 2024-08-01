// maximum length bitonic less optimized.cpp
#include <iostream>
#include<algorithm>
using namespace std;
//the reason we took dec array form n-2 to 0 is so that the decreasing array has the memory from backside 
//as at cell i of the array we should know the state of inc array till it and the state of decreasing array after
//it as that is how it is demanded in the question that it should be first increasing then decreasing.
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
        if(n==1){
            cout<<n<<endl;
            t--;
            continue;
        }
        int inc[n];
        int dec[n];
        inc[0]=1;
        dec[n-1]=1;
        for(int i=1;i<n;i++){
            if(a[i]>=a[i-1]){
                inc[i]=inc[i-1]+1;
            }
            else{
                inc[i]=1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(a[i]>=a[i+1]){
                dec[i]=dec[i+1]+1;
            }
            else{
                dec[i]=1;
            }
        }
        int maxC=0;
        for(int i=0;i<n;i++){
            maxC=max(inc[i]+dec[i]-1, maxC);
        }
        cout<<maxC<<endl;
        t--;
    }
    return 0;
}