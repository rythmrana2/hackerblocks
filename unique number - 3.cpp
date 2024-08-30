// unique number - 3.cpp

//first way is to use a n^2 loop to find the numbers with two matches.
//second way is to store the numbers and their counts in a map and use it to find the unique number(delete the 
//numbers whose count becomes three from the map to make the unique number easier to find at last)
//above method can also be done with array
//third method is to use two sets and when you find a new element add it to first set, when you find it again , remove
//it from first set and add it to second set and when you find it third remove it from the second set or dont care, 
//the only element remaining in the first set is unique one.
//now we have to find an O(n) way with constant space O(1).
//had to look at the coding blocks solution for this question as i was not able to think by myself and the solution
//came out to be pretty simple. - take an array , add the bits of all the numbers in the way that all bits of all 
//numbers at 0 bit position add up similary for other positions, this would give us the summation of bits at 
//each bit index. now there would be some summations that are not a multiple of three, therefore take mod with 3
//of all summations, and you get the unique number you needed.
//as we can go at max till 64 bits, that is what we will use in our solution.
//when we are dealing with long long int(64 bits), then in case of negative numbers i am having to add them with +1
//but when i am dealing with int (32 bits), i am not having to add +1 to them as correct answer is getting output
//not sure why this is happening. however it is working fine for positive numbers in both cases.
// i tried to implement coding blocks approach, and their code was a bit different, so instead of going on ever
//number till 32 times, they did a while (no>0) approach and calculated the bits for a number till number became
//0, this is more optimized then mine. rest everything they did same.
//gfg's implementation of this same solution is different and that is working correctly for negative numbers as well
//however mine is working correctly for negative numbers if i only take till 32 bits and not 64. not sure what is wrong
//gfg has another solution for this question which went over my head.
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int bits[32]={ 0 };
    int answer=0;
    for(int i=0;i<32;i++){
        for(int j=0;j<n;j++){
            bits[i]+=a[j]&1;
            a[j]=a[j]>>1;
        }
        bits[i]%=3;
        answer+=bits[i]*(1<<i);
    }
    cout<<answer;
    return 0;
}
