// string sort.cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool compare(string a, string b){
    int count=0;
    for(int i=0;i<min(a.length(), b.length());i++){
        if(a[i]==b[i]){
            count++;
        }
        else{
            break;
        }
    }
    if(count==min(a.length(), b.length())){
        return a.length()>b.length();
    }
    else{
        return a<b;
    }
}

int main(){
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n, compare);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}

