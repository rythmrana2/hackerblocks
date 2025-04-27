#include <iostream>
using namespace std;

void printOutput(long long n) {
  cout << n << " ";
  if (n == 1) {
    return;
  }
  if ((n & 1) == 1) {
    printOutput(n * 3 + 1);
  } else {
    printOutput(n >> 1);
  }
  return;
}
int main() {
  int n;
  cin >> n;
  //   for(long long i = n; i>1;){
  //     if((i&1)==1){
  //         i=i*3 + 1;
  //     }else{
  //         i=i>>1;
  //     }
  //     cout<<i<<" ";
  //   }
  printOutput(n);
  return 0;
}