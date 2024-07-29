#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string a;
	cin>>a;
	string b = "";
	for(int i=0;i<a.length();i++){
		b+=' ';
	}
	for(int i=a.length()-1;i>-1;i--){
		b[a.length()-(a[i]-'0')] = (a.length()-i) + '0';
	}
	cout<<b;
	return 0;
}