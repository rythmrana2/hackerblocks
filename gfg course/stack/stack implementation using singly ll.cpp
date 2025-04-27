#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

struct myStack {
    Node* top;
    int nodeCount;

  myStack(){
    top = NULL;
    nodeCount=0;
  }
 
  void push(int data){
    Node * temp=new Node(data);
    temp->next = top;
    top=temp;
    nodeCount++;
  }

  bool isEmpty(){
    return top==NULL;
  }

  int pop(){
    if(isEmpty()){
        return -1;
    }
    Node* next = top->next;
    int data= top->data;
    delete top;
    top=next;
    nodeCount--;
    return data;
  }
  int size(){
    return nodeCount;
  }
  int peek(){
    if(isEmpty()){
        return -1;
    }
    return top->data;
  }
};

int main() {
  myStack stacker;
  stacker.push(0);
  stacker.push(1);
  cout<<stacker.peek()<<endl;
  cout<<stacker.pop()<<endl;
  cout<<stacker.isEmpty()<<endl;
  return 0;
}