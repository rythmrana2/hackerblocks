#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

Node* deleteEndNode(Node* head) {
    if(head==NULL){
        return head;
    }else if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node* curr = head;
    Node* temp = curr;
    while(curr->next!=NULL){
        temp=curr;
        curr=curr->next;
    }
    temp->next=NULL;
    delete curr;
    return head;
}

// gfg implementation
Node* deleteEndNode2(Node* head) {
    if(head==NULL){
        return head;
    }else if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node* curr = head;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    delete (curr->next);
    curr->next=NULL;
    return head;
}

void traverseLinkedList2(Node* head) {
  Node* curr = head;
  while (curr != NULL) {
    cout << curr->data << " ";
    curr = curr->next;
  }
  return;
}

int main() {
  Node* head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head = deleteEndNode(head);
  traverseLinkedList2(head);
  return 0;
}