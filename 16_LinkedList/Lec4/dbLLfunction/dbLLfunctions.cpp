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

class DBll{
public:
    int size;
    Node* head;
    Node* tail;

    DBll(){
        size=0;
        head=tail=NULL;
    }

    void insertAtTail(int val){
        Node* temp= new Node(val);
        if(size==0){
            head=tail=temp;
        }else{
            tail->next=temp;
            tail=temp->prev;    // extra line
            tail=temp;
        }
        size++;
    }

    void insertAtHead(int val){
        Node* temp= new Node(val);
        if(size==0){
            head=tail=temp;
        }else{
            temp->next=head;
            head->prev=temp;   // extra line
            temp=head;
            size++;
        }
    }

    void insertAtIdx(int idx,int val){
        if(idx<0){
            cout<<"Invalid Index";
        }else if(idx==0){
            insertAtHead(val);
        }else if(idx==size){
            insertAtTail(val);
        }else{
            Node* temp= new Node(val);
            Node* travel=head;
            for(int i=1;i<idx-1;i++){
                travel=travel->next;
            }
            temp->next=travel->next;
            temp->prev=travel;
            travel->next->prev=temp;
            travel->next=temp;
            size++;
        }
    }

    void deleteAtTail(){
        Node* temp=tail;
        temp->next=NULL;
        tail=temp;
        size--;
    }

    void deleteAtIdx(int idx){       
        if(size==0){
            cout<<"List is empty";
            return ;
        }else if(idx<0||idx>size){
            cout<<"Invalid";
            return ;
        }else{
            Node* temp= head;
            for(int i=0;i<idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            temp->next->prev=temp;  // extra line
            size--;
        }
    }

    int getAtIdx(int idx){
        Node* temp=head;
        if(idx<0||idx>size){
            return;
        }else{
            for(int i=0;i<idx-1;i++){
                temp=temp->next;
            }
        return temp->val;
        }
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main() {
    
    DBll list;

    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);
    list.insertAtTail(50);

    list.display();

    list.insertAtHead(70);

    list.display();

    return 0;
}