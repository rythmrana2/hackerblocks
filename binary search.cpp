// binary search.cpp
//to find an element in 1024 elements , binary search will take at max 11 comparisons. that is for 2^10 elements ,
//it will rule out every element in just 10 comparisons. that is the beauty of binary search.
//here there is one important thing to note, calculating mis using low+high / 2 is not the correct way, that 
//is because if there are elements near to 10^9, then doing low + high has a possibility to make it greater than the
//limit of int datatype or other data types, therefore doing mid = low + (high-low)/2, always makes the calculation
//fall inside the datatype limit and therefore results in correct calculation. as in the low+high/2 case , the
//resultant index can become negative due to overflow and then using that index will give out of bounds
//in array. another way to find the mid is ((unsigned)low + (unsigned)high)>>1; this will make sure that
//the low+high calculation does not overflow and returns negative as the calculation of low+high will be in unsigned
// int limits and the resultant by doing /2 will be in int limits, therefore it will result in correct calculation.
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(a[mid]==m){
            cout<<mid;
            return 0;
        }
        else if(m>a[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    cout<<-1;
    return 0;
}