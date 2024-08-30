// playing with bits more optimized.cpp

//in this approach, i will not be using loops to count all the bits of all numbers, instead we will be creating and 
//simultaneously using lookup tables with fixed size to calculate the number of bits in the numbers.
//we can create a lookup table as big as the number but whats the use when a lookup table of size 16 or 256 can do the
///work(note 16 and 256  we use as they hold till 15 and 255 and both of these represent 1111 and 1111 1111 respectively)
//which is 4 and 8 bits, which are some bti numbers that divide 32 and 64 that is the bit size of int and long long int
//therefore these lookup tables make it easy to count bits of biggest int and long long int numbers.
#include <iostream>
using namespace std;

int main(){
    int q;
    cin>>q;
    int arr[256]={ 0 };
    for(int i=0;i<256;i++){
        arr[i]=(i&1)+arr[i/2];
    }
    for(int i=0;i<q;i++){
        int a, b;
        cin>>a>>b;
        int sum=0;
        for(int j=a;j<=b;j++){
            int no=j;
            while(no){
                sum+=arr[(no&255)];
                no=no>>8;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
