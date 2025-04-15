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

void traverseLinkedList(Node* head) {
  if (head == NULL) {//base case for recursion
    return;
  }
  cout<<head->data<<" ";
  traverseLinkedList(head->next);
  return;
}

int main() {
  Node* head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  traverseLinkedList(head);
  return 0;
}