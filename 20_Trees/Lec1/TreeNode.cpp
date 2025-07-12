#include <iostream>
#include<climits>
using namespace std;

class Node{         // this is a tree node
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

void displayTree(Node* root){
   if (root==NULL) return;

   cout<<root->val<<" ";
   displayTree(root->left);
   displayTree(root->right);
}

int sumTree(Node* root){
    int ans=0;
    
    if(root==NULL) return 0;
    int lst=sumTree(root->left);
    int rst=sumTree(root->right);

    ans= root->val+lst+rst;
    return ans;
}

int sizeOfTree(Node* root){
    int size=0;
    
    if(root==NULL) return 0;

    return 1+sizeOfTree(root->left)+sizeOfTree(root->right);
}

int maxVal(Node* root){
    if(root==NULL) return INT_MIN;
    int lmax= maxVal(root->left);
    int rmax=maxVal(root->right);

    int maxm=0;
    maxm=max(root->val,max(lmax,rmax));
    return maxm;
}

int levelOfTree(Node* root){
    if(root==NULL) return 0;

    int level= max(levelOfTree(root->left),levelOfTree(root->right));
    return 1+level;
}

int main() { 
    
    Node* a = new Node(1); 
    Node* b = new Node(2); 
    Node* c = new Node(3); 
    Node* d = new Node(4); 
    Node* e = new Node(5); 
    Node* f = new Node(6); 
    Node* g = new Node(7); 

    a->left=b;
    a->right=c;

    b->left=d;
    b->right=e;

    c->left=f;
    c->right=g;

    // display
    displayTree(a);
    cout<<endl;

    // sum
    cout<<sumTree(a);
    cout<<endl;

    // size
    cout<<sizeOfTree(a);
    cout<<endl;


    // max value of the node
    cout<<maxVal(a);
    cout<<endl;

    // level
    cout<<levelOfTree(a);
    cout<<endl;

    cout<<endl;
    return 0;
}

// 01:27:31

        // LC: 543
        // LC: 100
        // LC: 226 (vvi)