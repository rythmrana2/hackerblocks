// finding cb numbers.cpp
#include<iostream>
#include<cstring>
#include<map>
using namespace std;


//i will be using brute force approach here, taking two nested loops as here they are not testing if we can solve 
//with faster algo, instead they are testing how we will maximize the output
//we wont use two pointer approach as even two pointer approach might miss a cb number that might come inside the
// cb numbers that we get from right to left iteration and left to right iteration
//here from two pointer i mean running two iterations one from left and one form right.
//extremely memory intensive solution and time intensive too
//here i took all the strings possible , checked if which of them are cb number. store them in a map with their
// starting and ending positions. then proceed to calculate which all are conflicting and with how many, storing
//this data in another map. then when i find the most conflicting cb number i remove it then recalculate the
//conflicts for remaining ones. if no conflicts the i output hte answer ,if conflicts then i repeat the step
//of finding most conflicts and then removing that one. this gives me the correct solution.

struct cmp {
    bool operator()(map<pair<int, int>, int>::iterator a, map<pair<int, int>, int>::iterator b) const {
        if((*a).second==(*b).second){
            return (*a).first<(*b).first;
        }
        else{
            return (*a).second<(*b).second;
        }
    }
};
int createNumber(char a[], int i, int j){
    int number=0;

    int multiplier=1;
    for(int start=i;start<=j;start++){
        number+=(a[start]-'0');
        number*=10;
    }
    number/=10;
    return number;

}

bool isCBNumber(char a[], int i, int j){
    int number = createNumber(a, i, j);

    int CBNumbers[] = { 2,3,5,7,11,13,17,19,23,29 };
    if(number ==1||number ==0){
        return false;
    }
    for(int i=0;i<10;i++){
        if(number==CBNumbers[i]){
            return true;
        }
    }
    bool flag=true;
    for(int i=0;i<10;i++){
        if(number%CBNumbers[i]==0){
            flag=false;
        }
    }
    return flag;
}

int main(){
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    a[n]='\0';
    //storing our numbers and their locations in a map to solve conflicts
    map<pair<int, int>, int> conflictResolution;
    for(int i=0;i<strlen(a);i++){
        for(int j=i;j<strlen(a);j++){
            if(isCBNumber(a, i, j)){
                int number = createNumber(a, i, j);
                conflictResolution.insert(make_pair(make_pair(i, j), number));
                // cout<<"cb: "<<number<<endl;
            }
        }
    }
    // now conflict data storing
    bool conflict = false;
    map< map<pair<int, int>, int>::iterator, int, cmp> conflictData;
    for(auto itr = conflictResolution.begin();itr!=conflictResolution.end();itr++){
        for(auto itr2 = itr;itr2!=conflictResolution.end();itr2++){
            if(itr!=itr2){
                if((((*itr).first).first<=((*itr2).first).first && ((*itr).first).second>=((*itr2).first).first) || (((*itr).first).first>=((*itr2).first).first && ((*itr).first).first<=((*itr2).first).second)){
                    // cout<<"conflict of "<<(*itr).second<<" with "<<(*itr2).second<<" at "<<((*itr).first).first<<", "<<((*itr).first).second<<" and "<<((*itr2).first).first<<", "<<((*itr2).first).second<<"."<<endl;
                    conflictData[itr]++;
                    conflictData[itr2]++;
                    conflict=true;
                }
            }
        }
    }
    //now conflict resolution
    while(conflict){
        map<pair<int, int>, int>::iterator max;
        int maxNumber=0;
        for(auto itr = conflictData.begin();itr!=conflictData.end();itr++){
            if((*itr).second>maxNumber){
                maxNumber=(*itr).second;
                max=(*itr).first;
            }
        }
        // cout<<((*max).second)<<" "<<maxNumber<<endl;
        conflictResolution.erase((*max).first);
        for(auto itr = conflictData.begin();itr!=conflictData.end();itr++){
            (*itr).second=0;
        }
        conflict=false;
        for(auto itr = conflictResolution.begin();itr!=conflictResolution.end();itr++){
            for(auto itr2 = itr;itr2!=conflictResolution.end();itr2++){
                if(itr!=itr2){
                    if((((*itr).first).first<=((*itr2).first).first && ((*itr).first).second>=((*itr2).first).first) || (((*itr).first).first>=((*itr2).first).first) && (((*itr).first).first<=((*itr2).first).second)){
                        conflictData[itr]++;
                        conflictData[itr2]++;
                        conflict=true;
                    }
                }
            }
        }
    }
    cout<<conflictResolution.size()<<endl;
}