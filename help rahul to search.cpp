// help rahul to search.cpp
#include <iostream>
#include <climits>
using namespace std;
//whatever we are going to do it has to be less than O(n) as linear search takes O(n).
//instead of rotating the array back or sorting the array. just find the point where the biggest element is present
//and then do binary search having the information.
//the way to find biggest element is to find the index after which a[index+1]<a[index]. the index is the biggest point
//and we wont have to do a complete O(n) loop to find biggest element, as if we were doing so then we could have
//just done linear search 
//above method is time consuming as it is O(n + log n) which is more than linear search as finding biggest element
//using the above method is O(n) in worst case which is same as doing linear search in worst case.
//therefore there is a more optimized code in other file.
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    int biggestIndex=0;
    for(int i=0;i<n;i++){
        if(a[i+1]<a[i]){
            biggestIndex=i;
            break;
        }
    }
    int s, e;
    if(key==a[0]){
        cout<<0;
        return 0;
    }
    else if(key>a[0]){
        s=1%n;//if size of array is just 1
        e=biggestIndex;
    }
    else{
        s=(biggestIndex+1)%n;
        e=n-1;
    }
    while(s<=e){
        int mid = s+(e-s)/2;
        if(a[mid]==key){
            cout<<mid;
            return 0;
        }
        else if(a[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    cout<<-1;
    return 0;
}

