#include<iostream>
#include <climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int maxSum=INT_MIN;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;;j=(j+1)%n){
                sum+=a[j];
                if(sum>maxSum){
                    maxSum=sum;
                }
                if(sum<0){
                    sum=0;
                }
                if(i==0){
                    if(j==n-1){
                        break;
                    }
                }
                if(j==i-1){
                    break;
                }
            }
        }
        cout<<maxSum<<endl;
        t--;
    }
    return 0;
}