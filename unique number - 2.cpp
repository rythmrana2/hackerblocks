// unique number - 2.cpp

//my most basic approach wa to do a n^2 loop to find the two unique numbers
//then O(n) ws to use an array or map to store the count of all numbers to then provide the unique number
//i knew xor wont work for two unique numbers so i was confused
//coding blocks gave this solution i am implementing below
//for the approach coding blocks gave i thought to actually create two arrays to store the two sets and then do the xor
// on the individual arrays to get the unique numbers however what coding blocks did was different, they directly
//found the numbers belonging to one set and took their xor together finding one unique number and then used this 
//number and the result we got from xor of all the numbers to get the second unique number. so these two things i 
//didn't think in my approach, i was thinking of creating extra space to store the two sets of numbers have a particular
//position bit set and then use xr on both to get the unique numbers (time and space waste approach).
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int answer=0;
    for(int i=0;i<n;i++){
        answer^=a[i];
    }
    int result = answer;
    //the answer now has to be greater than 0 as there are two unique numbers - we find the first bit that
    // is the difference in the two unique numbers
    int position = 0;
    int count=0;
    while(answer){
        if(answer&1){
            position=count;
            break;
        }
        answer = answer>>1;
        count++;
    }
    int mask = 1<<position;
    int unq1=0;
    for(int i=0;i<n;i++){
        if(a[i]&mask){
            unq1^=a[i];
        }
    }
    int unq2 = result^unq1;
    cout<<unq1<<" "<<unq2;
    return 0;
}
