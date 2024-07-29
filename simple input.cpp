#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	long long int sum=0;
	int n;
	vector<int> memory;
	while(true)
	{
		cin>>n;
		sum+=n;
		if(sum<0){
			break;
		}else{
			memory.push(n);
		}
	}
	for(auto itr:memory){
		cout<<*itr;
	}
	return 0;
}