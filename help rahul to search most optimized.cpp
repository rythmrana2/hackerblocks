// help rahul to search optimized.cpp
#include <iostream>
#include <climits>
using namespace std;
//O(1.75log n)
//whatever we are going to do it has to be less than O(n) as linear search takes O(n).
//one way is to first find pivot(biggest) element using binary search and then doing binary search using the method
//in the unoptimized file to look for the key. in here doing binary search for pivot would work in the way - 
//if mid is greater than start then pivot is in the mid to end part else vice versa. - this approach came to my
//mind after i took a hint from coding blocks. this will take O(2*log n) to do
//ths method will take O(log n + log n ) which is better.
//however we have an even better approach - coding blocks approach. - we will directly look in the array using 
//binary search , there will be a sorted array on one part of mid and unsorted on other. if the key lines in sorted
//then just use binary search in that part and if you find it return it else look in the unsorted part and keep
//on doing this till the s>e in unsorted part. this method will take O(log n) + O(log (n/2)) + O(log(n/4)) + O(log 1)
// ~ (roughly equal to) O(log(1.75n)). so this technique is still better than the above O(2*log n) method however
// we will code both the first approach in other file and the second approach using iterative and recursive method
//in this file.

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int key;
//     cin>>key;
//     int s=0;
//     int e=n-1;
//     while(s<=e){
//         int mid = s+(e-s)/2;
//         if(a[mid]==key){
//             cout<<mid;
//             return 0;
//         }
//         else if(a[mid]>=a[s] && key<a[mid]){
//             //sorted
//             int lower=s;
//             int higher=mid-1;
//             while(lower<=higher){
//                 int medium = lower +(higher-lower)/2;
//                 if(a[medium]==key){
//                     cout<<medium;
//                     return 0;
//                 }
//                 else if(a[medium]>key){
//                     higher=medium-1;
//                 }
//                 else{
//                     lower=medium+1;
//                 }
//             }

//             //if key not found then go to unsorted part
//             s=mid+1;
//         }
//         else if(a[mid]<=a[e] && key>a[mid]){
//             //sorted
//             int lower=mid+1;
//             int higher =e;
//             while(lower<=higher){
//                 int medium = lower +(higher-lower)/2;
//                 if(a[medium]==key){
//                     cout<<medium;
//                     return 0;
//                 }
//                 else if(a[medium]>key){
//                     higher=medium-1;
//                 }
//                 else{
//                     lower=medium+1;
//                 }
//             }
//             //if key not found then go to unsorted part
//             e=mid-1;
//         }
//         else if(a[mid]<a[s] && key<a[mid]){
//             //unsorted
//             e=mid-1;
//         }
//         else if(a[mid]>a[e] && key>a[mid]){
//             //unsorted
//             s=mid+1;
//         }
//     }
//     cout<<-1;
//     return 0;
// }

//above method is by iteration
//below method is by recursion
int recursiveBinarySearch(int* a, int lower, int higher, int key){
    //base condition
    if(lower>higher){
        return -1;
    }
    //logic for this call
    int mid  = lower + (higher-lower)/2;
    if(a[mid]==key){
        return mid;
    }
    else if(a[mid]>=a[lower]){
        //sorted
        int answer=-1;
        if(key<a[mid]){
            answer=recursiveBinarySearch(a, lower, mid-1, key);
            if(answer!=-1){
                return answer;
            }
        }
        //recursive call to unsorted part
        return recursiveBinarySearch(a, mid+1, higher, key);
    }
    else if(a[mid]<=a[higher]){
        //sorted
        int answer=-1;
        if(key>a[mid]){
            answer=recursiveBinarySearch(a, mid+1, higher, key);
            if(answer!=-1){
                return answer;
            }
        }
        //recursive call to unsorted part
        return recursiveBinarySearch(a, lower, mid-1, key);
    }
    //if it reached here then return -1
    return -1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    int s=0;
    int e=n-1;
    cout<<recursiveBinarySearch(a, s, e, key);
    return 0;
}
