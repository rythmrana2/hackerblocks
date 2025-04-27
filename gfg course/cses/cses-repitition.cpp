#include <iostream>
#include<cmath>
using namespace std;
int printAnswer(int maxi, int count, string a, int i){
    if(i==a.length()){
        return 0;
    }
    if(a[i]==a[i-1]){
        count++;
        maxi=max(maxi,count);
    }
    else{
        count=1;
    }
    return max(maxi,printAnswer(maxi,count,a,i+1));
}
int main() {
string a;
cin>>a;
// int maximum=1;
// int count=1;
// for(int i=1;i<a.length();i++){
//     if(a[i-1]==a[i]){
//         count++;
//         maximum=max(count,maximum);
//     }else{
//         count=1;
//     }
// }
cout<<printAnswer(1,1,a,1);
  return 0;
}