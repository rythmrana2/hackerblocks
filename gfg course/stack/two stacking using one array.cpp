#include <iostream>
using namespace std;

class myStack {
  int* arr;
  int top1;
  int top2;
  int cap;
  
  public: 
  myStack(int n){
    arr = new int[n];
    top1=-1;
    top2=n;
    cap=n;
  }
 
  bool push1(int data){
    if(top1+1==top2){
      return false;
    }
    top1++;
    arr[top1]=data;
    return true;
  }
  bool push2(int data){
    if(top2-1==top1){
      return false;
    }
    top2--;
    arr[top2]=data;
    return true;
  }

  bool isEmpty1(){
    return top1==-1;
  }
  bool isEmpty2(){
    return top2==cap;
  }

  int* pop1(){
    if(top1==-1){
      return NULL;
    }
    int* temp =new int;
    *temp =  arr[top1];
    top1--;
    return temp;
  }
  int* pop2(){
    if(top2==cap){
      return NULL;
    }
    int * temp = new int;
    *temp = arr[top2];
    top2++;
    return temp;
    }
  int size1(){
    return top1+1;
  }
  int size2(){
    return cap-top2;
  }
  int* peek1(){
   if(top1!=-1){
    int* temp = new int;
    *temp = arr[top1];
    return temp;
   }
   return NULL;
  }
  int* peek2(){
    if(top2!=cap){
      int* temp = new int;
      *temp = arr[top2];
      return temp;
     }
     return NULL;
    }
};

int main() {
  myStack stacker(5);
  stacker.push1(0);
  stacker.push2(1);
  stacker.push1(43);
  stacker.push2(23);

  stacker.push1(3);
  stacker.push2(7);

  cout<<*stacker.peek1()<<endl;
  cout<<*stacker.peek2()<<endl;
  cout<<*stacker.pop1()<<endl;

  cout<<*stacker.pop2()<<endl;
  cout<<stacker.isEmpty1()<<endl;
  cout<<stacker.size2()<<endl;

  return 0;
}