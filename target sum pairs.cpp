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
    int i=0;
    int j=n-1;
    while(i<j){
        if(a[i]+a[j]==target){
            cout<<a[i]<<" and "<<a[j]<<endl;
            i++;
            j--;
        }
        else if(a[i]+a[j]<target){
            i++;
        }
        else{
            j--;
        }
    }
    return 0;
}