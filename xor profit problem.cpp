// xor profit problem.cpp

//brute force approach of n^2, to get the solution, better approach mentioned in optimized file.
#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    int answer=0;
    for(int i=a;i<=b;i++){
        for(int j=i;j<=b;j++){
            answer=max(answer, (i^j));
        }
    }
    cout<<answer;
    return 0;
}
