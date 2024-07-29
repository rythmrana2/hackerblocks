#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int firstNumber=0;
	int secondNumber=1;
	for(int i=2;i<=n;i++){
		int temp = secondNumber;
		secondNumber = secondNumber+firstNumber;
		firstNumber = temp;
	}
	cout<<secondNumber;
	return 0;
}