#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int numbers = 1;
	for(int i=0;i<=2*n;i++){
		int temp = numbers;
		int temp2 = 0;
		while(temp){
			cout<<n-temp2<<" ";
			temp--;
			temp2++;
		}
		for(int j=0;j<2*(2*n+1-2*numbers);j++){
			cout<<" ";
		}
		temp=numbers;
		while(temp){
			if(i==n && temp==numbers){
				temp--;
			}
			cout<<n-temp+1<<" ";
			temp--;
		}
		cout<<"\n";
		if(i<n){
		numbers++;
		}else{
			numbers--;
		}

	}
	return 0;
}