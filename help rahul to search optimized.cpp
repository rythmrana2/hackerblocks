// help rahul to search optimized.cpp
#include <iostream>
#include <climits>
using namespace std;
//O(2log n)
//whatever we are going to do it has to be less than O(n) as linear search takes O(n).
//one way is to first find pivot(biggest) element using binary search and then doing binary search using the method
//in the unoptimized solution file to look for the key. in here doing binary search for pivot would work in the way - 
//if mid is greater than start then pivot is in the mid to end part else vice versa. - this approach came to my
//mind after i took a hint from coding blocks. this will take O(2*log n) to do
//ths method will take O(log n + log n ) which is better.
// we have better approach in other file.

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    int pivotIndex=-1;
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(a[mid]>=a[s]){
            //then go to unsorted part
            s=mid+1;
        }
        else{
            //then go to unsorted part
            e=mid-1;
        }
    }
    if(a[s]<a[s-1]){
        pivotIndex = s-1;
    }
    else{
        pivotIndex=s-2;
    }
    s=0;
    e=n-1;
    if(key==a[0]){
        cout<<0;
        return 0;
    }
    else if(key>a[0]){
        s=1%n;//if size of array is just 1
        e=pivotIndex;
    }
    else{
        s=(pivotIndex+1)%n;
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
