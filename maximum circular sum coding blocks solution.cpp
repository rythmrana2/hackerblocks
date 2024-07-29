#include <iostream>
#include <climits>
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
        if(n == 1)
            cout<<a[0];

        int totalSum = 0;
        for(int i = 0; i < n; i++) {
            totalSum += a[i];
        }

        int sum1 = 0, maxSum = INT_MIN, sum2 = 0, minSum = INT_MAX;

        for(int i = 0; i < n; i++) {
            sum1 =sum1 + a[i];
            maxSum = max(maxSum, sum1);
            if(sum1<0){
                sum1=0;
            }

            sum2 = sum2 + a[i];
            minSum = min(minSum, sum2);
            if(sum2>0){
                sum2=0;
            }
        }

        if(maxSum<0) {
            cout<<maxSum<<endl;
        }
        else{
            cout<< max(maxSum, totalSum - minSum)<<endl;
        }
        t--;
    }
    return 0;
}