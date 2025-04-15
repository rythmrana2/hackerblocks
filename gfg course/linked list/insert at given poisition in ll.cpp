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

void insertAtGivenPosition(Node** head, int data, int pos) {
  Node* temp = new Node(data);
  if (pos == 1) {
    temp->next=*head;
    *head = temp;
    return;
  } else if (*head == NULL) {
    return;
  }
  Node* curr = *head;
  int count = 1;
  while (curr->next != NULL and count < pos - 1) {
    curr = curr->next;
    count++;
  }
  if (count == pos - 1) {
    temp->next = curr->next;
    curr->next = temp;
  }
  return;
}

//gfg implementation
void insertAtGivenPosition2(Node** head, int data, int pos) {
    Node* temp = new Node(data);
    if (pos == 1) {//only reason for handling 1 is head doesnt have a next therefore we have to handle it separately and assign it to head as if it is handled by below code it will assign temp to head->next and not place temp at 1.
      temp->next=*head;
      *head = temp;
      return;
    } 
    Node* curr = *head;
    for(int i=1;i<=pos-2 && curr!=NULL;i++)curr = curr->next;
    if(curr==NULL){
        return;
    }
      temp->next = curr->next;
      curr->next = temp;
    return;
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
  insertAtGivenPosition2(&head, 40, 5);  // position 2 means second node
  traverseLinkedList2(head);
  return 0;
}