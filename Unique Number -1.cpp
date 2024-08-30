// Unique Number -1.cpp

//calssis bitwise xor problem
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
    cout<<answer;
    return 0;
}

