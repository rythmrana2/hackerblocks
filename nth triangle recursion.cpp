// nth triangle recursion.cpp
#include<iostream>
using namespace std;
//bigger problem - to print all sum , current problem - to add current number for sum, smaller problem to get the remaining
//numbers sum, base case - we reach 0;
int getTriangleByRecursion(int n){
    //base case
    if(n==0) return 0;

    //recurrence relation
    return n+getTriangleByRecursion(n-1);
}
int getTriangleByEquation(int n){
    int answer = (n/2.0)*(2 + (n-1));
    return answer;
}


int main(){
    int n;
    cin>>n;
    //this question can actually be solved by just using summation of natural numbers equation but i will do it by 
    //both as the main thing to practice here is recursion
    cout<<getTriangleByRecursion(n)<<endl;
    cout<<getTriangleByEquation(n)<<endl;
    return 0;
}