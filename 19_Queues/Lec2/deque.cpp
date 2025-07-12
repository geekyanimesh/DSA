#include <iostream>
using namespace std;

class Node{
public:
    Node* prev;
    Node* next;
    int val;
    Node(int val){
        this->prev=NULL;
        this->next=NULL;
        this->val=val;
    }
};

class Deque{
public:
    Node* head;
    Node* tail;
    int size=0;

    Deque(){
        this->head=NULL;
        this->tail=NULL;    
    }

    void pushBack(int val){
        Node* temp=new Node(val);
        while(tail->next!=NULL){
            tail=tail->next;
        }
        tail->next=temp;
        temp->next=NULL;
    }

    void popFront(){
        
    }


};

int main() {
    
    

    return 0;
}

// to be completed
