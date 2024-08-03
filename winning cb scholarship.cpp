// winning cb scholarship.cpp
#include<iostream>
using namespace std;
int main() {
    int students, initialCoupons, requiredCoupons, killForCoupons;
    //the remaining coupons can go overboard 10^9 dues to kill for coupon being an extremely big number , so
    // take remaining coupons as long long int. (however i did not in this solution however in coding competition
    //this might be the reason you solution gives incorrect answer or for some edge cases with extremely big kil for
    // coupons and you wont be able to figure out what went wrong or it will take a lot of time)
    cin>>students>>initialCoupons>>requiredCoupons>>killForCoupons;
    int remainingStudents =  (students-(initialCoupons/requiredCoupons))<0?0:students-(initialCoupons/requiredCoupons);
    int count = initialCoupons/requiredCoupons;
    int remainingCoupons = initialCoupons%requiredCoupons;
    while(remainingStudents){
        while(remainingCoupons<requiredCoupons && remainingStudents){
            remainingStudents--;
            remainingCoupons+=killForCoupons;
        }
        if(remainingStudents==0){
            break;
        }
        count+=(remainingStudents-(remainingCoupons/requiredCoupons))<0?remainingStudents:remainingCoupons/requiredCoupons;
        remainingStudents = (remainingStudents-(remainingCoupons/requiredCoupons))<0?0:remainingStudents-(remainingCoupons/requiredCoupons);
        remainingCoupons = remainingCoupons%requiredCoupons;
    }
    cout<<count;
    return 0;
}