// power of a number using recursion.cpp
#include<iostream>
#include<cmath>
using namespace std;
//in this question , i again forgot that we have to divide the problem into smaller problem, so the smaller problem can be
//i will do number * whatever the number the power function returns, as my current task is to just multiply the number in
//the number returned to increase its power. this approach will give hte correct answer. earlier i was thinking that i
//will multiple the number to change the numbers value and then pass it to the next function where number will be 
//multiplied to the value obtained and then this new value will be passed to next function, this is also a method where
//i have divided the problem into smaller problems.
//therefore i have implemented both.
//here to imagine the bigger problem in terms of smaller problem , i can write - a^n = a*a^n-1, here the smaller problem
//is a^n-1 which will be returned by recursive call and just multiply a to it and return the value, this is how 
//you can imagine the first power function. 
//i could also have done module by 10e9+7 as that would make sure the answer is always in int range
int power(int a, int pow){
    //base case
    if(pow==0) return 1;

    //recurrence relation
    return a*power(a, pow-1);
}
int power2(int a, int pow, int number){
    if(pow==0)return a;
    a = a*number;
    return power2(a, pow-1, number);
}
int main(){
    int a;
    cin>>a;
    int pow;
    cin>>pow;
    cout<<power(a, pow)<<endl;
    cout<<power2(1, pow, a)<<endl;
    return 0;
}