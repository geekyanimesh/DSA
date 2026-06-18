#include <iostream>
#include <climits>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

int level(Node* root){
    if(root==nullptr) return 0;
    return 1+ max(level(root->left), level(root->right));
}

void nthLevel(Node* root, int curr, int level){
    if(root==nullptr) return;
    if(curr==level) cout<<root->val<<" ";
    nthLevel(root->left, curr+1, level);
    nthLevel(root->right, curr + 1, level);
}

void levelOrder(Node* root){
    int n=level(root);
    for(int i=0;i<n;i++){
        nthLevel(root,0,i);
    }
}

int main()
{

    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    Node *f = new Node(60);

    a->left = b;
    a->right = c;

    b->left = d;

    d->right = e;

    e->left = f;

    
    levelOrder(a);

    return 0;
}