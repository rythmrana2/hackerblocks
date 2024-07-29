#include<iostream>
using namespace std;

int main(){
	long long int n;
	cin>>n;
	bool flag = false;;
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			flag = true;
			break;
		}
	}
	if(flag){
		cout<<"Not Prime";
	}else{
		cout<<"Prime";
	}

	return 0;
}