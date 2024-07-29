#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i-1;j++){
		cout<<" ";
	}
	for(int j=1;j<=i-1;j++){
		cout<<" ";
	}
		for(int j=n-i+1;j>0;j--){
			cout<<j<<" ";
		}
		cout<<0<<" ";
		for(int j=1;j<=n-i+1;j++){
			cout<<j<<" ";
		}
		cout<<"\n";
	}
	for(int i=0;i<2*n;i++){
		cout<<" ";
	}
	cout<<0<<"\n";
	for(int i=1;i<=n;i++){
		for(int j=n-i;j>0;j--){
		cout<<" ";
	}
	for(int j=n-i;j>0;j--){
		cout<<" ";
	}
		for(int j=1;j<=i;j++){
			cout<<i-j+1<<" ";
		}
		cout<<0<<" ";
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<"\n";
	}
	return 0;
}