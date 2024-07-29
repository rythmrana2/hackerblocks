// kartik bhaiya and strings.cpp
#include <iostream>
#include <cstring>
using namespace std;
//trying the most brute force method cause not able to think of anything better
int main()
{
    int k;
    cin>>k;
    char a[1000001];
    cin>>a;
    int maxA=0;
    for(int i=0;i<strlen(a);i++){
        int tempK = k;
        char tempA[1000001];
        strcpy(tempA, a);
        for(int j=i;j<strlen(tempA) && tempK;j++){
            if(tempA[j]=='a'){
                tempA[j]='b';
                tempK--;
            }
        }
        int count=0;
        for(int l=0;l<strlen(tempA);l++){
            if(tempA[l]=='b'){
                count++;
                maxA = max(maxA, count);
            }
            else{
                count=0;
            }
        }
    }
    int maxB=0;
    for(int i=0;i<strlen(a);i++){
        int tempK = k;
        char tempA[1000001];
        strcpy(tempA, a);
        for(int j=i;j<strlen(tempA) && tempK;j++){
            if(tempA[j]=='b'){
                tempA[j]='a';
                tempK--;
            }
        }
        int count=0;
        for(int l=0;l<strlen(tempA);l++){
            if(tempA[l]=='a'){
                count++;
                maxB = max(maxB, count);
            }
            else{
                count=0;
            }
        }
    }
    cout<<max(maxA, maxB);

    return 0;
}