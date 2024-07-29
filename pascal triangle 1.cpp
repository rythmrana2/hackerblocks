#include<iostream>
#include<cmath>
using namespace std;

void printRow(int rowNumber){
	int ans= 1;
	cout<<ans<<"  ";
	for(int j=1;j<rowNumber;j++){
		ans = ans*(rowNumber-j)/j;
		cout<<ans<<"  ";
	}
	cout<<"\n";
	return;
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		//printing spaces
		for(int j=0;j<=2*(n-i);j++){
			cout<<" ";
		}
		printRow(i);
	}
	return 0;
}