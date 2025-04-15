#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

//gfg instructor implemnetation
struct Node2{
    int data;
    Node2* next;
    Node2(int x){
        data = x;
        next=NULL;
    }
};

int main(){
    Node* head = new Node();
    head->data = 10;
    head->next = new Node();
    head->next->data = 20;
    head->next->next = new Node();
    head->next->next->data=30;
    head->next->next->next=NULL;
    cout<<head<<" "<<head->data<<" "<<head->next<<"/n";
    return 0;
}

//gfg instructor implemnetation
int main2(){
    Node2* head = new Node2(10);
    head->next = new Node2(20);
    head->next->next = new Node2(30);
    cout<<head<<" "<<head->data<<" "<<head->next<<"/n";
    return 0;
}