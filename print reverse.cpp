#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string a;
	cin>>a;
	for(int i=a.length()-1;i>=0;i--){
		cout<<a[i];
	}
	return 0;
}

// other solution
// public static int reverse(int n){    
//      int ans = 0;        
//         while(n != 0){        
//           int digit = n % 10;
//           ans = ans *10 + digit;          
//           n /= 10;        
//         }                
//        return ans;    
// }