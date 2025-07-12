#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void InOrder(Node* root){
    if(root==NULL) return;
    InOrder(root->left);
    cout<<root->val<<" ";
    InOrder(root->right);
}


int main() {
    
    Node* a= new Node(10);
    Node* b= new Node(5);
    Node* c= new Node(20);
    Node* d= new Node(2);
    Node* e= new Node(8);
    Node* f= new Node(15); 
    Node* g= new Node(25);
    Node* h= new Node(4);
    Node* i= new Node(12);
    Node* j= new Node(3);
    Node* k= new Node(13);

    // connection
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    d->right=h;
    h->left=j;
    c->left=f;
    c->right=g;
    f->left=i;
    i->right=k;

    

    return 0;
}