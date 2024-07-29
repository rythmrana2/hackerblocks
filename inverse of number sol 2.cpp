#include<iostream>
using namespace std;

int main(){
	int a;
	cin>>a;
	int b=0;
	for(int i=1;a;i++)
	{
		int digit = a%10;
		int multiplier=1;
		for(int j=digit-1;j>0;j--){
			multiplier*=10;
		}
		b+=i*multiplier;
		a=a/10;
	}
	cout<<b;
	return 0;
}