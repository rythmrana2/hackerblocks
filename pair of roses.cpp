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
        sort(a, a+n);
        int target;
        cin>>target;
        string answer="";
        int i=0;
        int j=n-1;
        while(i<j){
            int sum = a[i]+a[j];
            if(sum==target){
                answer = "Deepak should buy roses whose prices are " + to_string(a[i]) + " and "+ to_string(a[j])+".";
                i++;
                j--;
            }
            else if(sum<target){
                i++;
            }
            else{
                j--;
            }
        }
        cout<<answer<<endl;
        t--;
    }
    return 0;
}