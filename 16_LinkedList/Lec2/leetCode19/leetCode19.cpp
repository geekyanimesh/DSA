#include <iostream>
using namespace std;

/* LeetCode 19: delete the nth element from
the end  of the LinkeList */

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
   
void deleteFromN(int n,Node* head){
     Node* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(n==count){
            head=head->next;
            return ;
        }
        int idx=count-n;
        temp=head;
        for(int i=0;i<idx-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        
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

    deleteFromN(3,a); 

    cout<<endl;
    display(a);


    return 0;
}