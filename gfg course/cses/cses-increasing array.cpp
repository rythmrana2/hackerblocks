#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int>a;
  for(int i=0;i<n;i++){
    int b;
    cin>>b;
    a.push_back(b);
  }
  long long moves=0;
  for(int i=1;i<n;i++){
    if(a[i]>=a[i-1]){
        continue;
    }
    moves+=a[i-1]-a[i];
    a[i]=a[i-1];
  }
  cout<<moves;
  return 0;
}