#include <iostream>
using namespace std;


int main(){
    //in this question we are assuming that the character array length will always be equal to atleast twice the length of the string.
    //or else what we can do is take a sufficiently large character array.
    //the pattern here is , if a string is to be rotated a certain number of times n, then you will observe that the last n characters will simply come to the front, this is
    //an important observation as this will help us create a logic that will save space and time
    //also if n is greater than or equal to length of string just take its mod.
    //if i knew we could think of as big array as we want then i would have thought of the same solution
    int n;
    cin>>n;
    cin.ignore();
    char array[100];
    cin>>array;
    int length = strlen(array);
    n=n%length;
    for(int i=length-1;i>=0;i--){
        array[i+n]=array[i];
    }
    for(int i=0;i<n;i++){
        array[i]=array[length+i];
    }
    array[length]='\0';
    cout<<array;
    return 0;
}

