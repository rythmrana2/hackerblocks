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
        int leftArray[n];
        int left=a[0];
        int right =a[n-1];
        int rightArray[n];
        leftArray[0]=0;
        rightArray[n-1]=0;
        if(n==1){
            cout<<0<<endl;
        }
        for(int i=1;i<n;i++){
            if(a[i]<left){
                leftArray[i]=left-a[i];
            }
            else{
                leftArray[i]=0;
                left=a[i];
            }
        }
        for(int i=n-2;i>=0;i--){
            if(a[i]<right){
                rightArray[i]=right-a[i];
            }
            else{
                rightArray[i]=0;
                right=a[i];
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=min(leftArray[i], rightArray[i]);
        }
        cout<<sum<<endl;
        t--;
    }
    return 0;
}