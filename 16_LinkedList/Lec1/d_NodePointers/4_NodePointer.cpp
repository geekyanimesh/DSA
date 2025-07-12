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

// Display the size of the LinkedList
int size(Node * head){
    Node* temp = head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    } 
    return count;
}
int main() {
    
    // different method using pointers

    Node* a= new Node(10);
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);

    // storing address
    a->next=b;
    b->next=c;
    c->next=d;

    // printing values

    Node* temp = a;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    } 

    // printing d from a

    cout<<a->next->next->next->val;
    cout<<endl;

    // write about head and tail of linkedlist in 
    //notebook  --- Done

    // Display the size of the LinkedList
    cout<<size(a);

    // LinkedList has unlimited size
    

    cout<<endl;
    return 0;
}