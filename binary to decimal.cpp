#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int BaseNumber = 1;
	int answer=0;
	while(n){
		ans +=BaseNumber*(n%10);
		BaseNumber<<=1;;
		n=n/10;
	}
	cout<<answer;
	return 0;
}