#include <iostream>
using namespace std;

/* LeetCode 160: */

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
   
int reachTheMiddle(Node* head){
    Node* temp=head;
    int count=0;
    while(temp->next==NULL){
        count++;
        temp=temp->next;
    }
    int mid=(count+1)/2;

    Node* res=head;
    for(int i=0;i<mid;i++){
        res=res->next;
    }
    int ans=res->val;
    return ans;
}

int main() {
    
    Node* a= new Node(10);
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);
    Node* e= new Node(50);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;

    display(a);
     
    cout<<endl;

    cout<<reachTheMiddle(a); 


    return 0;
}

// 59:05 remaining