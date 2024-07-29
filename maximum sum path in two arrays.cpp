#include <iostream>
#include <climits>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t){
        int n, m;
        cin>>n>>m;
        int a[n];
        int b[m];
        int mod=1000000007;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        long long int cumSumA[n];
        cumSumA[0]=a[0];
        long long int cumSumB[m];
        cumSumB[0]=b[0];
        for(int i=1;i<n;i++){
            cumSumA[i]=cumSumA[i-1]+a[i];
        }
        for(int i=1;i<m;i++){
            cumSumB[i]=cumSumB[i-1]+b[i];
        }
        vector<int> aMark;
        vector<int> bMark;
        if(n<m){
            int b_index=0;
            for(int a_index=0;a_index<n;a_index++){
                if(a[a_index]>b[b_index]){
                    b_index++;
                    if(b_index==m){
                        break;
                    }
                    a_index--;
                    continue;
                }
                else if(a[a_index]<b[b_index]){
                    continue;
                }
                else{
                    aMark.push_back(a_index);
                    bMark.push_back(b_index);
                    b_index++;
                    if(b_index==m){
                        break;
                    }
                    continue;
                }
            }
        }
        else {
            int a_index=0;
            for(int b_index=0;b_index<m;b_index++){
                if(a[a_index]<b[b_index]){
                    a_index++;
                    if(a_index==n){
                        break;
                    }
                    b_index--;
                    continue;
                }
                else if(a[a_index]>b[b_index]){
                    continue;
                }
                else{
                    aMark.push_back(a_index);
                    bMark.push_back(b_index);
                    a_index++;
                    if(a_index==n){
                        break;
                    }
                    continue;
                }
            }
        }
        long long int maxSum=0;
        long long int curSumA=0;
        long long int curSumB=0;
        int a_index =0;
        int b_index = 0;
        int i=1;
        if(aMark.size()>0){
            curSumA=cumSumA[aMark[0]];
            curSumB=cumSumB[bMark[0]];
            maxSum=(max(curSumA, curSumB))%mod;
            if(aMark.size()>1){
                for(i=1;i<aMark.size();i++){
                    curSumA=(cumSumA[aMark[i]]-cumSumA[aMark[i-1]]);
                    curSumB=(cumSumB[bMark[i]]-cumSumB[bMark[i-1]]);
                    maxSum=(maxSum+max(curSumA, curSumB))%mod;
                }
            }
            i--;
            maxSum=(maxSum + max(cumSumA[n-1]-cumSumA[aMark[i]], cumSumB[m-1]-cumSumB[bMark[i]]))%mod;
        }
        else{
            maxSum=(max(cumSumA[n-1], cumSumB[m-1]))%mod;
        }
        cout<<maxSum<<endl;
        t--;
    }
    return 0;
}