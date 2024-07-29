#include <iostream>
#include <cstring>
using namespace std;

//the key for this solution is , a palindrome has a mirror in the middle, so it best to start from 
//the middle and expand on either sides to check if the resulting strings are palindrome and stop
//when the current string isn't. therefore here we loop over the whole array once and just expand
// on every element to find all the palindromes hence the time complexity is similar to n and space complexity is 1.
//also another concept is, a palindrome is either odd length palindrome or even length palindrome nothing 
//else and this i used here. when i checked if the next character is equal or not , to use even length check
// and even if its even length for current character, i will still check for odd length as it might be both

int main(){
    char a[1001];
    cin.getline(a, 1001);
    int cnt=0;
    for(int i=0;i<strlen(a);i++){
        if(i<strlen(a)-1 && a[i]==a[i+1]){//for even length palindromic string
            int start = i;
            int end = i+1;
            while(start>=0 && end<strlen(a) && a[start]==a[end]){
                cout<<start<<" "<<end<<endl;
                cnt++;
                start--;
                end++;
            }
        }
        //for odd length palindromic string
        int start = i;
        int end = i;
        while(start>=0 && end<strlen(a) && a[start]==a[end]){
            cout<<start<<" "<<end<<endl;

            cnt++;
            start--;
            end++;
        }
    }
    cout<<cnt;
    return 0;
}

