// finding cb numbers optimized.cpp
#include<iostream>
#include<cstring>
using namespace std;

//using something similar to sliding window to sort in n + a little re iterating of the window and 
//checking for cb number and creating number by iterating over the array being sent to function
//extremely memory and time saving solution
//best solution - here i check a single digit number as a window first, if it is cb number then i
//start the window from the next position(take the whole window to the next position)
// if not then i expand the window and check the newest member added to window, if it is cb number then i 
//again take the whole window to the next digit if not then i loop over the window to create the numbers 
//from windows starting index to ending index ,if any of the numbers created are cb numbers then i again shift the 
//whole window to the next position of window end else i keep continuing, suppose i dont find anything even if  
//whole window covered, then i expand the window by one digit and continue.

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
// same code of main block in similar version written below in comments - 

int main(){
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    a[n]='\0';
    int i=0;
    int j=0;
    int count=0;
    while(j<n){
        int flag=false;
        for(int start=i;start<=j;start++){
            if(isCBNumber(a, start, j)){
                count++;
                j++;
                i=j;
                flag=true;
                break;
            }
        }
        if(!flag){
            j++;
        }
    }
    cout<<count;
}

// int main(){
//     int n;
//     cin>>n;
//     char a[n+1];
//     cin>>a;
//     a[n]='\0';
//     int i=0;
//     int j=0;
//     int count=0;
//     while(j<n){
//         if(isCBNumber(a, j, j)){
//             count++;
//             j++;
//             i=j;
//         }
//         else if(i!=j){
//             int flag=false;
//             for(int start=i;start!=j;start++){
//                 if(isCBNumber(a, start, j)){
//                     count++;
//                     j++;
//                     i=j;
//                     flag=true;
//                     break;
//                 }
//             }
//             if(!flag){
//                 j++;
//             }
//         }
//         else{
//             j++;
//         }

//     }
//     cout<<count;
// }