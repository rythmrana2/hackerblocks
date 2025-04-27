#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};
//this we could have done linke singly ll where the top is the ehad only and deletion and insertiopn is 
///handled at head instead of end.
struct myStack {
    Node* LinkedList;
    Node* top;
    int nodeCount;

  myStack(){
    LinkedList = NULL;
    nodeCount=0;
    top=LinkedList;
  }
 
  void push(int data){
    if(top==NULL){
      LinkedList=new Node(data);
      top=LinkedList;
      nodeCount++;
    }else{
      top->next = new Node(data);
      top->next->prev=top;
      top=top->next;
      nodeCount++;
    }
  }

  bool isEmpty(){
    return top==NULL;
  }

  int pop(){
    if(isEmpty()){
        return -1;
    }
    int tempData = top->data;
    Node* temp=top;
    top=top->prev;
    delete temp;
    if(top==NULL){
      LinkedList=NULL;
    }
    nodeCount--;
    return tempData;
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