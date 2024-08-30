// count set bits.cpp

//this can be done using lookup table O(1) lookup and creating is also O(1) and storage is also O(1), but i wil be implementing brian kenighan's algo O(log(n)) , space O(1).
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int bits=0;
        while(a[i]){
            a[i]=(a[i]&(a[i]-1));
            bits++;
        }
        cout<<bits<<endl;
    }
    return 0;
}
