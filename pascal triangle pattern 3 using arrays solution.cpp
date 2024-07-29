#include<iostream>
// n^2 time complexity and 2n space complexity
using namespace std;
int main() {
	int n;
	cin>>n;
	int array1[n];
	int array2[n];

	if(n==0){
		return 0;
	}else if(n==1){
		cout<<1<<"\n";
		return 0;
	}else if(n==2){
		cout<<1<<"\n"<<1<<"	"<<1<<"\n";
	}else {
		cout<<1<<"\n"<<1<<"	"<<1<<"\n";
	}
	array1[0]=1;
	array1[1]=1;
	for(int i=3;i<=n;i++){
		cout<<1<<"	";
		int j=1;
		for(;j<i-1;j++){
			array2[j]=array1[j-1]+array1[j];
			cout<<array2[j]<<"	";
		}
		cout<<1<<"\n";
		array2[0]=1;
		array2[j]=1;
		for(int k=0;k<n;k++){
			array1[k]=array2[k];
		}
	}
	return 0;
}