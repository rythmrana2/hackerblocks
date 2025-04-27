#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a;
  for (int i = 0; i < n; i++) {
    int b;
    cin >> b;
    a.push_back(b);
  }
  int answer = 0;
  for (int i = 0; i < a.size(); i++) {
    answer ^= a[i];
    answer ^= i;
  }
  answer ^= a.size();
  cout << answer;
  return 0;
}