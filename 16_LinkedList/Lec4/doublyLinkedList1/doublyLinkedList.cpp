#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void revDisplay(Node* tail){
    Node* temp=tail;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}

int main() {
    
    // 10 20 30 40 50

    Node* a= new Node(10);
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);
    Node* e= new Node(50);

    // making forward connections
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    
    // making backward connection 
    e->prev=d;
    d->prev=c;
    c->prev=b;
    b->prev=a;

    display(a);
    revDisplay(e);

    

    return 0;
}