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

int searchNodeIterative(Node* head, int data) {
  if (head == NULL) {
    return -1;
  }
  Node* curr = head;
  int count = 1;
  while (curr != NULL) {
    if (curr->data == data) {
      return count;
    }
    count++;
    curr = curr->next;
  }
  return -1;
}
//gfg implementation
int searchNodeIterative(Node* head, int data) {
  Node* curr = head;
  int count = 1;
  while (curr != NULL) {
    if (curr->data == data) {
      return count;
    }
    count++;
    curr = curr->next;
  }
  return -1;
}

int searchNodeRecursive(Node* head, int data) {
  if (head == NULL) {
    return -1;
  }
  if (head->data == data) {
    return 1;
  }
  int ans = searchNodeRecursive(head->next, data);
  if (ans == -1) {
    return -1;
  }
  return ans + 1;
}

int main() {
  Node* head = new Node(10);
  cout << searchNodeIterative(head, 30);
  return 0;
}