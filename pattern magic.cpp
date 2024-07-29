#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int spaces = -1;
	for(int i=0;i<2*n;i++){
		if(i==n){
			spaces-=4;
			continue;
		}
		int j;
		if(i<n){
			j=n-i;
		}else{
			j=abs(n-i)+1;
		}
		if(i==0 || i==2*n-1){
			cout<<"*";
			j=n-1;
		}
		for(;j>0;j--){
			cout<<"*";
		}

		if(i<n){
			for(int k=spaces;k>0;k--){
			cout<<" ";
		}
		spaces+=2;
		}else{
			for(int k=spaces;k>0;k--){
			cout<<" ";
		}
		spaces-=2;
		}
		
		if(i<n){
			j=n-i;
		}else{
			j=abs(n-i)+1;
		}
		if(i==0 || i==2*n-1){
			j=n-1;
		}
		for(;j>0;j--){
			cout<<"*";
		}
		cout<<"\n";

	}
	return 0;
}