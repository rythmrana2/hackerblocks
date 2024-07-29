#include<iostream>
using namespace std;

int main(){
	int inputNumber;
	cin>>inputNumber;
	if(inputNumber==0){
		cout<<0;
		return 0;
	}
	int octalNumber=0;
	while(inputNumber){
		int MaxNumber = 1;
		int count=0;
		while(MaxNumber<=inputNumber){
			MaxNumber=MaxNumber<<3;
			count++;
		}
		MaxNumber=MaxNumber>>3;
		count--;
		int multiplier = 1;
		for(int i=0;i<count;i++){
			multiplier*=10;
		}
		octalNumber += (inputNumber/MaxNumber)*multiplier;
		inputNumber %= MaxNumber;
	}
	cout<<octalNumber;
	return 0;
}