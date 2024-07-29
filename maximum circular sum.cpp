#include<iostream>
#include <climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        int a[2*n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=n;i<2*n;i++){
            a[i]=a[i-n];
        }
        int maxSum=INT_MIN;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<i+n;j++){
                sum+=a[j];
                if(sum>maxSum){
                    maxSum=sum;
                }
                if(sum<0){
                    sum=0;
                }
            }
        }
        cout<<maxSum<<endl;
        t--;
    }
    return 0;
}