#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int firstNumber, secondNumber;
	cin>>firstNumber>>secondNumber;
	int gcd = 1;
	for(int i=1;i<=min(firstNumber,secondNumber);i++){
		if(firstNumber%i==0 && secondNumber%i==0){
			gcd = max(gcd,i);
		}
	}
	cout<<gcd;
	return 0;
}