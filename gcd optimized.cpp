#include<iostream>
#include<cmath>
using namespace std;

int getGcd(int first,int second){
	if(second == 0){
		return first;
	}
	return getGcd(second,first%second);
}

int main(){
	int firstNumber, secondNumber;
	cin>>firstNumber>>secondNumber;
	int gcd;
	gcd = getGcd(firstNumber,secondNumber);
	cout<<gcd;
	return 0;
}