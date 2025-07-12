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

void nthLevel(Node* root,int n,int size){
    if(root==NULL )return ;
    if(size==n){
         cout<<root->val<<" ";
         return;
    }else{
        nthLevel(root->left,n,size+1);
        nthLevel(root->right,n,size+1);
    }
    
}

// finding levels
int levels(Node* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}

void levelOrder(Node* root){

    // Find out number of levels
    int lev=levels(root);
    
    for(int i=0;i<lev;i++){
        nthLevel(root,i,1);
        cout<<endl;
    }
}

int main() {
    
    Node* a = new Node(1);
    Node* b= new  Node(7);
    Node* c = new Node(9);
    Node* d = new Node(2);
    Node* e = new Node(6);
    Node* f = new Node(9);
    Node* g = new Node(5); 
    Node* h = new Node(11);
    Node* i = new Node(5);


    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->right=f;
    e->left=g;
    e->right=h;
    f->left=i;

    int size=1;
    nthLevel(a,3,size);

    cout<<endl;

    // levelOrder with only root as parameter
    levelOrder(a);


    cout<<endl;
    return 0;
}

// 01:32:00     LC - 102