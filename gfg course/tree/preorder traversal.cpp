#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* left;
  Node* right;
  Node(int x) {
    data = x;
    right = NULL;
    left = NULL;
  }
};

void preorderTraversal(Node* root) {
  // base case
  if (root == NULL) {
    return;
  }
  // recursive case
  cout << root->data << " ";
  preorderTraversal(root->left);
  preorderTraversal(root->right);
  return;
}

int main() {
  Node* root = new Node(1);
  root->left = new Node(2);
  root->left->left = new Node(3);
  root->right = new Node(4);
  preorderTraversal(root);
  return 0;
}