#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n];
    int value=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=value;
            value++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        int k=0;
        int j=n-1;
        while(k<j){
            a[i][k]+=a[i][j];
            a[i][j]=a[i][k]-a[i][j];
            a[i][k]-=a[i][j];
            k++;
            j--;
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            a[i][j]+=a[j][i];
            a[j][i]=a[i][j]-a[j][i];
            a[i][j]-=a[j][i];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}