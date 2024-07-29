#include <iostream>
#include<string.h>
#include<algorithm>
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
        int i=0;
        int j=n-1;
        int left=a[0];
        int right=a[n-1];
        while(i<=j){
            if(a[i]<a[j]){
                sum+=max(left, a[i])-a[i];
                left=max(left, a[i]);
                i++;
            }
            else{
                sum+=max(right, a[j])-a[j];
                right=max(right, a[j]);
                j--;
            }
        }

        cout<<sum<<endl;
        t--;
    }
    return 0;
}