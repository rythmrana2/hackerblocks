#include<iostream>
using namespace std;
void printRow(int rowNumber){
	long long int ans = 1;
	cout<<ans;
	for(int i=1;i<rowNumber;i++){
		ans = ans*(rowNumber-i)/(i);
		cout<<ans;
	}
	cout<<"\n";
	return;
}
int main() {
	int n;
	cin>>n;
	cout<<1<<"\n";
	for(int i=2;i<=n;i++){
		printRow(i);
	}
	return 0;
}