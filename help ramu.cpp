#include <iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t){
        int c1, c2, c3, c4;
        cin>>c1>>c2>>c3>>c4;
        int n;
        int m;
        cin>>n>>m;
        int rik[n];
        int cab[m];
        for(int i=0;i<n;i++){
            cin>>rik[i];
        }
        for(int i=0;i<m;i++){
            cin>>cab[i];
        }
        int sumRik=0;
        int sumCab=0;
        for(int i=0;i<n;i++){
            sumRik+=min(rik[i]*c1, c2);
        }
        sumRik=min(sumRik, c3);
        for(int i=0;i<m;i++){
            sumCab+=min(cab[i]*c1, c2);
        }
        sumCab=min(sumCab, c3);
        cout<<(min(sumRik+sumCab, c4))<<endl;
        t--;
    }
    return 0;
}