#include <iostream>
using namespace std;

/* No chance of overflow but underflow can occur*/

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class Stack{
public:
    Node* head;
    int size=0;
    int arr;
    int idx;
    Stack(){
        idx=-1;
        this->head=NULL;
        this->size=0;
    }
    void push(int val){
        Node* temp= new Node(val);
        temp->next=head;
        head=temp;
        size++;
    }
    
    void pop(){
        if(head==NULL){
            return;
        }else{
           head=head->next;
           size--; 
        }
    }

    int top(){
        if(head==NULL){
            return -1;
        }else{
            return head->val;
        }
    }

    void display(){
        Node* temp=head;
        while (temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main() {
    
    Stack st;

    cout<<st.top()<<endl;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.display();

    st.pop();
    
    st.display();

    return 0;
}