// longest k character substring.cpp
#include <iostream>
#include <set>
using namespace std;

//in this question i tired using sliding window protocol and my goal was to slide a window of k distinct elements
//to find the longest sequence however using sets was a wrong choice as every operation on set is log n time 
//complexity and in my code at one place i am increasing i to shorten the window but then i am also traversing
//this window to see if the removed element is present in front, this is a time consuming operation and therefore
//makes my code less efficient in terms of time
//however my answer is space efficient as set will only have those character which are present in string, unlike 
//coding blocks answer where they use an array to maintain character frequency
//coding blocks answer is efficient time wise as insertion and checking character and other operations are 
//taking O(1) time, that is how they have written the code however they are using a lot of space as they have 
//created an array to store the freq of characters using indices of the array

int main(){
    int n;
    char a[100];
    int k;
    cin.getline(a, 100);
    cin>>k;
    int i=0;
    int j=1;
    int maxCount=0;
    int count= 1;
    set<char> distinct;
    while(j<strlen(a)){
        if(distinct.find(a[j])!=distinct.end()){
            count++;
            if(distinct.size()==k){
                maxCount = max(maxCount, count);
            }
            j++;
        }
        else{
            distinct.insert(a[j]);
            if(distinct.size()>k){
                while(distinct.size()>k){
                    distinct.erase(a[i]);
                    i++;
                    for(int start=i;start!=j;start++){
                        distinct.insert(a[start]);
                        if(distinct.size()>k){
                            break;
                        }
                    }
                }
                count=j-i+1;
                j++;
            }
            else if(distinct.size()<k){
                count++;
                j++;
            }
            else{
                count++;
                maxCount=max(maxCount, count);
                j++;
            }
        }
    }
    cout<<maxCount<<endl;
    return 0;
}

