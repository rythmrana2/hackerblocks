// playing with bits.cpp

//the only approach i am able to think of is to loop over the numbers and count the 
//bits using the right shift operator method
//my approach is correct however the counting of set bits can be made faster by using built in set bit count or
//by brian kernighans algo.
// then there are better approaches , written in optimized file
#include <iostream>
using namespace std;

int main(){
    int q;
    cin>>q;
    cout<<__builtin_popcount(q);
    for(int i=0;i<q;i++){
        int a;
        int b;
        cin>>a>>b;
        int sum=0;
        for(int j=a;j<=b;j++){
            int no = j;
            while(no){
                if(no&1){
                    sum++;
                }
                no=no>>1;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
