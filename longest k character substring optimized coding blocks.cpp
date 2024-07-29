//longest k character substring optimized coding blocks.cpp
#include <iostream>
#include <set>
using namespace std;
//this solution is faster than mine because first of all all insertion deletion and search operations
//are O[1) unlike my log n, second thing, in my while distinct >k loop. after removal of a character 
//from set i was again iterating the sliding window to see if the character is getting repeated again,
// this solution removes that loop by maintaining a frequency of the characters in the sliding window,
// so if they remove something, they know how many of it are left in the sliding window and hence know 
//what to do without iterating the sliding window again, these are the two differences in our code.
int main(){
    int n;
    char a[100];
    int k;
    cin.getline(a, 100);
    cin>>k;
    int frequency[26]={ 0 };
    int distinct=0;
    int i=0;
    int j=0;
    int maxCount=-1;
    while(j<strlen(a)){
        frequency[a[j]-'a']++;
        if(frequency[a[j]-'a']==1){
            distinct++;
        }
        if(distinct==k){
            maxCount=max(j-i+1, maxCount);
            j++;
        }
        else if(distinct<k){
            j++;
        }
        else{
            while(distinct>k){
                frequency[a[i]-'a']--;
                if(frequency[a[i]-'a']==0){
                    distinct--;
                }
                i++;
            }
            j++;
        }
    }
    cout<<maxCount<<endl;
    return 0;
}

