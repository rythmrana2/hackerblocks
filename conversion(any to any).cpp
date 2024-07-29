#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int sb, db, number;
    cin>>sb>>db>>number;
    int finalNumber=0;
    int intermediateNumber=0;
    if(sb!=10){
        int multiple = 1;
        while(number){
            int digit = number%10;
            intermediateNumber+=digit*multiple;
            multiple*=sb;
            number/=10;
        }
    }
    else{
        intermediateNumber=number;
    }
    if(db!=10){
        int multiple=1;
        while(intermediateNumber){
            int digit = intermediateNumber%db;
            finalNumber+=digit*multiple;
            multiple*=10;
            intermediateNumber/=db;
        }
    }
    else{
        finalNumber=intermediateNumber;
    }
    cout<<finalNumber;
    return 0;
}
