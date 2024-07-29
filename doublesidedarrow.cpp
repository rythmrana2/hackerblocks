#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int numbers=1;
	int spaces= n-1;
	int middlespace=-1;
	for(int i=0;i<n;i++){
		for(int j=0;j<2*spaces;j++){
			cout<<" ";
		}
		for(int j=numbers;j>0;j--){
			cout<<j<<" ";
		}
		if(i!=0 && i!=n-1){
			for(int j=2*middlespace;j>0;j--){
				cout<<" ";
			}
			for(int j=1;j<=numbers;j++){
				cout<<j<<" ";
			}
		}

		if(i<(n-1)/2){
		numbers++;
		spaces-=2;
		middlespace+=2;
		}else{
			numbers--;
			spaces+=2;
			middlespace-=2;
		}
		cout<<"\n";
	}
	return 0;
}