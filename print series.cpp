#include<iostream>
using namespace std;

int main(){
	int n1,n2;
	cin>>n1>>n2;
	int count =0;
	int i=1;
	while(count<n1){
		int temp = 3*i+2;
		if(temp%n2){
			cout<<temp<<endl;
			count++;
		}
		i++;
	}
	return 0;
}