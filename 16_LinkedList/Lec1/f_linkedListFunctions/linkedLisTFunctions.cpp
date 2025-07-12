#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node * next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class LinkedList{
public:
   
   Node *head;
   Node *tail;
   int size=0;

   LinkedList(){
    head=NULL;
    tail=NULL;
   }

   void insertAtBegining(int val){
        Node *temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }else{
            temp->next=head;
            head=temp;
        }
        size++;
   }

   void insertAtIdx(int val,int idx){
    
     if(idx<0||idx>size){
        cout<<"Invalid";
     }
     if(size==0){
       // head=tail=temp;       
     }else if(idx==0){
         insertAtBegining(val);
         return ;
     }else{
        Node *t=new Node(val);
        Node *temp=head;

        for(int i=1;i<idx-1;i++){
            temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t;
        size++;
     }
    
   }


    void insertAtEnd(int val){
        Node *temp=new Node(val);
        if(size==0){
            head=temp;
            tail=temp;
        }else{
            tail->next=temp;
            tail=tail->next;
        }
        size++;
    }

      void getAtIdx(int idx){
       Node *temp=head; 
        if(idx==0){
            cout<<head->val;
        }else if(idx==size-1){
            cout<<tail->val;
        }else{
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            cout<<temp->val;
        }

    }

    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty";
            return;
        }
        head=head->next;
        size--;
    }

    
    void deleteAtIdx(int idx){
        if(size==0||idx>=size){
            cout<<"List is empty";
            return;
        }else{
            Node *temp=head;
            for(int i=1;i<idx-1;i++){
               temp=temp->next;
            }
        temp->next=temp->next->next;
        size--;
        }
    }

   void display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
   }

};
int main() {
    
    LinkedList ll;

    ll.insertAtBegining(30);
    ll.display();
    ll.insertAtBegining(20);
    ll.display();
    ll.insertAtBegining(10);

    ll.display();

    ll.insertAtIdx(80,3);   
    ll.display();

    ll.getAtIdx(2);
    cout<<endl;

    ll.deleteAtIdx(3);
    ll.display();


    return 0;
}
