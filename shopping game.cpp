#include <iostream>
#include<cmath>
using namespace std;


int main(){
    int T;
    cin>>T;
    while(T){
        T--;
        int ayush, harshit;
        cin>>ayush>>harshit;
        //do using sum of arithmetic progression 
        //using this technique i evaded a loop of min(ayushterm,harshitterm)*2 times
        //and solved this qeustion in 01 space and 01 time complexity.

        int ayushterm = sqrt(ayush);
        int harshitTerm = (-1 + sqrt(1 + 4*harshit))/2;
        if(ayushterm>harshitTerm){
            cout<<"Aayush"<<endl;
        } else{
            cout<<"Harshit"<<endl;
        }
    }
    return 0;
}

