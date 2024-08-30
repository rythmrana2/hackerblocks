// xor profit problem more optimized.cpp
//this is coding blocks solution, however i had the exact same approach, the logic was to find the first overlapping
//range between both the numbers from the msb of the bigger number, and if the msb of both the numbers are not 
//same then no issue, only needed to find the overlapping form the msb of the bigger number and after that overlapping
//each digit after this overlapping can be manipulated in a way to get all 1s. the only thing that i thought in the
//beginning but changed later was, it is only a concern if both the numbers have same msb and overlap and if both 
//dont have same msb then it is not an issue, then all the numbers cna be made 1 in some way or the other
//then another thing that didn't even come to my mind and this is where my implementation didn't work was
//i forgot that to get the overlapping range from the msg side i can just take the xor of both the smallest and biggest numbers
//that are provided and this will remove the overlapping range form the msb, and now that i have the position where
//the xor is starting, from there i can turn all the numbers 1 and that will be the answer, that is implemented in 
//the below code.
#include "iostream"
using namespace std;
int main(int argc, char* argv[])
{
    int x, y;
    cin>>x>>y;
    int num = x^y;
    int msb=0;
    while(num!=0) {
        num=num>>1;
        msb++;
    }
    int result = 1;
    result=result<<msb;
    cout<<result-1;

    return 0;
}