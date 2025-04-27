#include <iostream>
using namespace std;
//i forgot about dynamic memory alloation and used fixed array.  
struct myStack {
  vector<int> array;
 
  void push(int data){
    array.push_back(data);
  }
  bool isEmpty(){
    return array.empty();
  }
  int pop(){
    if(array.empty()){
        return -1;
    }
    int temp = array.back();
    array.pop_back();
    return temp;
  }
  int size(){
    return array.size();
  }
  int peek(){
    if(array.empty()){
        return -1;
    }
    return array.back();
  }
};

int main() {
  myStack stack;
  stack.push(0);
  stack.push(1);
  cout<<stack.peek()<<endl;
  cout<<stack.pop()<<endl;
  cout<<stack.isEmpty()<<endl;
  return 0;
}