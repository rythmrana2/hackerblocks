#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q){
        string answer="No";
        int A, atleast;
        cin>>A>>atleast;
        int count=0;
        for(int i=0;i<n;i++){
            if(A%a[i]==0){
                count++;
            }
            if(count==atleast){
                answer="Yes";
                break;
            }
        }
        cout<<answer<<endl;
        q--;
    }
    return 0;
}