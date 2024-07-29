#include <iostream>
using namespace std;


int main(){
    int rowCount;
    cin>>rowCount;
    int a[rowCount][rowCount];
    for(int i=0;i<rowCount;i++){
        for(int j=0;j<rowCount;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<rowCount;i++){
        for(int j=i+1;j<rowCount;j++){
            a[i][j]+=a[j][i];
            a[j][i]=a[i][j]-a[j][i];
            a[i][j]-=a[j][i];
        }
    }

    for(int i=0;i<rowCount;i++){
        for(int j=0;j<rowCount;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

