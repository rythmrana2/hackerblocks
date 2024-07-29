// form biggest number.cpp
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
bool compare(char* a, char* b){
    int j=0;
    int i=0;
    while(i<strlen(a) && j<strlen(b)&& a[i]==b[j]){
        i++;
        j++;
    }
    if(i!=strlen(a) && j!=strlen(b)){
        return a[i]>b[j];
    }
    else if(i==strlen(a) && j!=strlen(b)){
        return compare(a, b+j);
    }
    else if(j==strlen(b) && i!=strlen(a)){
        return compare(a+i, b);
    }
    else{
        return true;
    }
}

void stringSort(char* a, char* b, bool comparator(char* a, char* b)){
    char* itr=a;
    while(itr !=b-7){
        char* tempItr=itr;
        while(tempItr!=b-7){
            char* nextItr = tempItr+7;
            if(!compare(tempItr, nextItr)){
                char temp[7];
                strcpy(temp, tempItr);
                strcpy(tempItr, nextItr);
                strcpy(nextItr, temp);
            }
            tempItr=tempItr+7;
        }
        b=b-7;
    }
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[n][7];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a[0], a[n], compare);
        for(int i=0;i<n;i++){
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}

