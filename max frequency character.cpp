// max frequency character.cpp
#include <iostream>
#include <cstring>
using namespace std;
//logic 1 - sort the array - nlogn and then take a counter and loop over array - nlogn + n space - 1
//logic 2 - take a map of character and int - and (loop over array to get the answer - n + insertion and 
//retrieval for all the characters - n*log n + loop over map to find largest value - worst n) ~ nlogn 
//space - worst - n
//logic 3 - same thing that i did with map but using array - time - n as retrieval and insertion is 
//1 (then loop over array to get answer O(256) or take a maxCount var and while adding frequency in 
//frequency array, side by side kee a check on maxCount), space - 256. disadvantage - only considers latin characters.
// 256 as there are 256 ascii values
//logic 4 (i dont think this will work - ultimately it didn't work)- use stack to store max freq character ( concept - the stack can only have one type of character 
//at a time), loop over array - push in set, when different element found, pop from array and push again, 
//if top element same element , then pop it pop next element if different and push two same elements, 
//if all elements same, then push on the top.(how much space would set reserve for itself or 
//if set gets full does it allocate new bigger memory and copy its things to tht memory and delete 
//old memory, this looks efficient space wise)
int main(){
    char a[1001];
    cin.getline(a, 1001);
    int b[256]={ 0 };
    int maxCount=0;
    char maxChar;
    for(int i=0;i<strlen(a);i++){
        b[a[i]]++;
        if(b[a[i]]>maxCount){
            maxCount=b[a[i]];
            maxChar=a[i];
        }
    }
    cout<<maxChar;
    return 0;
}

