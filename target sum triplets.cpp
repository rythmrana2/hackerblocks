#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n);
    int target;
    cin>>target;
    for(int i=0;i<n-1;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum = a[i]+a[j]+a[k];
            if(sum==target){
                cout<<a[i]<<", "<<a[j]<<" and "<<a[k]<<endl;
                j++;
                k--;
            }
            else if(sum<target){
                j++;
            }
            else{
                k--;
            }
        }
    }
    return 0;
}