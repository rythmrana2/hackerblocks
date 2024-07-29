#include<iostream>
using namespace std;

int main(){
	int numberOfInputs;
	cin>>numberOfInputs;
	while(numberOfInputs){
		long long int binaryNumber;
		cin>>binaryNumber;
		int BaseNumber = 1;
		int decimalValue=0;
		while(binaryNumber){
			int lsb = binaryNumber%10;
			decimalValue+=lsb*BaseNumber;
			BaseNumber<<=1;
			binaryNumber/=10;
		}
		cout<<decimalValue<<endl;
		numberOfInputs--;
	}
	
	return 0;
}