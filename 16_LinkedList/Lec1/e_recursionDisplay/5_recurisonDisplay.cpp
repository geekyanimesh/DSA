// Displaying the LL using recursion

#include <iostream>
using namespace std;
class Node{
public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void displayRec(Node *head){
    if(head==NULL){ // base case
        return;
    }
    cout<<head->val<<" ";   // kaam 
    displayRec(head->next);  // call
}

void reverseDisplay(Node *head){
    if(head==NULL){     // base case
        return;
    }   
    displayRec(head->next); // call
    cout<<head->val<<" ";   // kaam
}
int main() {

    Node* a= new Node(10);
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);

    // storing address
    a->next=b;
    b->next=c;
    c->next=d;

    displayRec(a);
    cout<<endl;
    reverseDisplay(a);



    return 0;
}