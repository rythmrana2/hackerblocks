// recursion pattern 1 triangle.cpp

#include<iostream>
using namespace std;
//bigger problem - to print the whole triangle
//current problem - to print hte given row
//to print remaining rows

void printTriangle(int start, int end){
    //base case
    if(start==end+1)return;

    // recursive relation
    for(int i=0;i<start;i++){
        cout<<"*"<<" ";
    }
    cout<<endl;
    printTriangle(start+1, end);

    //return solution 
    return;
}

void patternCB(int n){

    if(n == 1){
        cout<<"*";
        cout<<"\n";
        return;

    }
    patternCB(n - 1);

    for(int i = 0; i < n; i++){
        cout<<"*";
    }

    cout<<"\n";
    return;
}

int main(){
    int n;
    cin>>n;
    printTriangle(1, n);
}