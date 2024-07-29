#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int evenSum=0,oddSum=0;
	bool flag = 0;
	while(n){
		int temp = n%10;
		if(!flag){
			oddSum+=temp;
		}else{
			evenSum+=temp;
		}
		flag=!flag;
		n=n/10;
	}
	cout<<oddSum<<endl<<evenSum;
	return 0;
}