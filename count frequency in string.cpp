// count frequency in string.cpp
#include <iostream>
#include <map>
using namespace std;

// first way, sort the array, and then do a loop to count the characters and print - nlogn + n, 
//second , take an array to store all the characters possible by their ascii number as index and their count as values, array size will be 128 bytes and a single loop
// third way - take a map and store all the characters by runnning a loop and also store its count as values and character as key, this is pace efficient and runs on a single loop.
int main(){
    char a[100];
    cin>>a;
    map<char, int> count;
    count.insert(make_pair(a[0], 1));
    for(int i=1;i<strlen(a);i++){
        if(count.find(a[i])!=count.end()){
            count[a[i]]++;
        }
        else{
            count[a[i]]++;
        }
    }
    for(map<char, int>::iterator itr=count.begin();itr!=count.end();itr++){
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }

    return 0;
}

