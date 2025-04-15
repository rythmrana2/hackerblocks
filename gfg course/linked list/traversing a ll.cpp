#include<iostream>
using namespace std;


struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next=NULL;
    }
};

void traverseLinkedList(Node* head){
    if(head==NULL){
        return;
    }
    while(head->next!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<head->data<<"/n";
}

//gfg implementation
void traverseLinkedList2(Node* head){
    Node* curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    return;
}


int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    traverseLinkedList(head);
    return 0;
}