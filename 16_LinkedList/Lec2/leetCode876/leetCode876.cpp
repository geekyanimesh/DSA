#include <iostream>
using namespace std;

// LeetCode 

class Node{
public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void display(Node* head){
 Node *temp= head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
   


int main() {
    
    Node* a= new Node(10);
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;

    display(a);



    return 0;
}