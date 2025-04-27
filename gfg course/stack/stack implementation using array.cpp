#include <iostream>
using namespace std;
//i forgot about dynamic memory alloation and used fixed array.  
struct myStack {
  int top;
  int limit;
  int* array;
  myStack(int size){
    array = new int[size]; 
    limit=size;
    top=-1;
  }
  void push(int data){
    if(size()==limit){
        return;
    }
    top++;
    array[top]=data;
  }
  bool isEmpty(){
    return top==-1;
  }
  int pop(){
    if(isEmpty()){
        return -1;
    }
    int temp = array[top];
    top--;
    return temp;
  }
  int size(){
    return top+1;
  }
  int peek(){
    if(isEmpty()){
        return -1;
    }
    return array[top];
  }
};

int main() {
  myStack stack(10);
  stack.push(0);
  stack.push(1);
  cout<<stack.peek()<<endl;
  cout<<stack.pop()<<endl;
  cout<<stack.isEmpty()<<endl;
  return 0;
}