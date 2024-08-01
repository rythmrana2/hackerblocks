// maximum length bitonic sub array.cpp
#include <iostream>
#include<algorithm>
using namespace std;
//most optimized bitonic array code, here the edge case was , the equal numbers that come at the end of decreasing series 
// should also get counted in the start of the increasing series that comes after the decreasing series
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
        bool flip=false;
        int count=1;
        int maxC=count;
        int sameNumbers=0;
        bool same=false;
        for(int i=1;i<n;i++){
            if(a[i]>a[i-1] && flip==false){
                same= false;
                count++;
                maxC=max(maxC, count);
            }
            else if(a[i]==a[i-1]){
                count++;
                if(same){
                    sameNumbers++;
                }
                else{
                    sameNumbers=2;
                }
                same= true;
                maxC=max(maxC, count);

            }
            else if(a[i]<a[i-1]){
                same= false;
                flip=true;
                count++;
                maxC=max(maxC, count);
            }
            else{
                count=2;
                if(same){
                    count=sameNumbers+1;
                }
                maxC=max(maxC, count);
                flip=false;
            }
        }
        cout<<maxC<<endl;
        t--;
    }
    return 0;
}