// kartik bhaiya and strings optimized.cpp
#include <iostream>
#include <cstring>
using namespace std;
//trying an optimized version with global maxima and then expanding the global maxima - this answer is wrong
int main()
{
    int k;
    cin>>k;
    char a[1000001];
    cin>>a;
    int maxAStart=-1;
    int maxAEnd=-1;
    int countA=0;
    int maxACount=0;
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='a'){
            countA++;
            if(countA>maxACount){
                maxACount=max(maxACount, countA);
                maxAEnd=i;
            }
        }
        else{
            countA=0;
            maxAStart=i;
        }
    }
    int maxBStart=-1;
    int maxBEnd=-1;
    int countB=0;
    int maxBCount=0;
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='a'){
            countB++;
            if(countB>maxBCount){
                maxBCount=max(maxBCount, countB);
                maxBEnd=i;
            }
        }
        else{
            countB=0;
            maxBStart=i;
        }
    }
    int i=maxAStart;
    int j=maxAEnd;
    int tempk=k;
    int chance=1;
    char tempA[1000001];
    strcpy(tempA, a);
    while(i>=0 && j<strlen(a)  && tempk){
        if(chance || j==strlen(a)){
            if(tempA[i]=='b'){
                tempA[i]='a';
                tempk--;
            }
            chance=0;
            i--;
        }
        else{
            if(!chance || i==-1){
                if(tempA[i]=='b'){
                    tempA[j]='a';
                    tempk--;
                }
                chance=1;
                j++;
            }
        }
    }
    int MaximumA=0;
    int counterA=0;
    for(int i=0;i<strlen(a);i++){
        if(tempA[i]=='a'){
            counterA++;
            MaximumA=max(MaximumA, counterA);
        }
        else{
            counterA=0;
        }
    }
    i=maxAStart;
    tempk=k;
    strcpy(tempA, a);
    while(i>=0 && tempk){
        if(tempA[i]=='b'){
            tempA[i]='a';
            tempk--;
        }
        i--;

    }
    counterA=0;
    for(int i=0;i<strlen(a);i++){
        if(tempA[i]=='a'){
            counterA++;
            MaximumA=max(MaximumA, counterA);
        }
        else{
            counterA=0;
        }
    }
    j=maxAEnd;
    tempk=k;
    strcpy(tempA, a);
    while(j<strlen(a) && tempk){
        if(tempA[i]=='b'){
            tempA[i]='a';
            tempk--;
        }
        j++;

    }
    counterA=0;
    for(int i=0;i<strlen(a);i++){
        if(tempA[i]=='a'){
            counterA++;
            MaximumA=max(MaximumA, counterA);
        }
        else{
            counterA=0;
        }
    }
    //bpart
    i=maxBStart;
    j=maxBEnd;
    tempk=k;
    chance=1;
    strcpy(tempA, a);
    while(i>=0 && j<strlen(a)  && tempk){
        if(chance || j==strlen(a)){
            if(tempA[i]=='a'){
                tempA[i]='b';
                tempk--;
            }
            chance=0;
            i--;
        }
        else{
            if(!chance || i==-1){
                if(tempA[i]=='a'){
                    tempA[j]='b';
                    tempk--;
                }
                chance=1;
                j++;
            }
        }
    }
    int MaximumB=0;
    int counterB=0;
    for(int i=0;i<strlen(a);i++){
        if(tempA[i]=='b'){
            counterB++;
            MaximumB=max(MaximumB, counterB);
        }
        else{
            counterB=0;
        }
    }
    i=maxBStart;
    tempk=k;
    strcpy(tempA, a);
    while(i>=0 && tempk){
        if(tempA[i]=='a'){
            tempA[i]='b';
            tempk--;
        }
        i--;

    }
    counterB=0;
    for(int i=0;i<strlen(a);i++){
        if(tempA[i]=='a'){
            counterB++;
            MaximumB=max(MaximumB, counterB);
        }
        else{
            counterB=0;
        }
    }
    j=maxBEnd;
    tempk=k;
    strcpy(tempA, a);
    while(j<strlen(a) && tempk){
        if(tempA[i]=='a'){
            tempA[i]='b';
            tempk--;
        }
        j++;

    }
    counterB=0;
    for(int i=0;i<strlen(a);i++){
        if(tempA[i]=='b'){
            counterB++;
            MaximumB=max(MaximumB, counterB);
        }
        else{
            counterB=0;
        }
    }
    cout<<max(MaximumA, MaximumB);
    return 0;
}