#include<iostream>
using namespace std;


int main(){
	int min,max,step;
	cin>>min>>max>>step;
	for(int i=min;i<=max;i+=step){
		cout<<i<<"\t"<<(int)((5.00/9)*(i-32))<<endl;
	}
	return 0;
}