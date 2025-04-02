#include<iostream>
using namespace std;

int SumOfFirstNNumbers(int n){
    int answer=0;
    for(int i=1;i<=n;i++){
        answer+=i;
    }
    return answer;
}

int main(){
    int number;
    cout<<"enter the numebr\n";
    cin>>number;
    cout<<"the answer is "<<SumOfFirstNNumbers(number)<<"\n";
    return 0;
}