#include<iostream>
#include<cmath>
using namespace std;


int main(){
	int N;
	cin>>N;
	if(N==0){
		cout<<"false";
		return 0;
	}
	bool increasing = false;
	int lastNumber;
	bool answer=true;
	cin>>lastNumber;
	N--;
	while(N){
		int number;
		cin>>number;
		if(number>lastNumber){
			increasing=true;
		}else if(number<lastNumber){
			if(increasing==true){
				answer=false;
                break;
			}
		}else{
			answer=false;
            break;
		}
		lastNumber=number;
		N--;
	}
	cout<<boolalpha<<answer;
	
	return 0;
}
