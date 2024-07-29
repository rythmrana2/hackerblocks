#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int number,digit;
	cin>>number>>digit;
	int count=0;
	while(number){
		int digitcOMPARE = number%10;
		if(digitcOMPARE==digit){
			count++;
		}
		number/=10;
	}
	cout<<count;
	return 0;
}