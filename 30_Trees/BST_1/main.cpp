#include <iostream>
#include <climits>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=nullptr;
        this->right=nullptr;
    }
};

void displayTree(Node* root){
    if(root==nullptr) return;
    else{
        cout<<root->val<<" ";
        displayTree(root->left);
        displayTree(root->right);
    }
}

int findSum(Node *root)
{
    if (root == nullptr)
        return 0;

    return root->val + findSum(root->left) + findSum(root->right);
}

int treeSize(Node* root){
    if(root==nullptr) return 0;
    return 1+treeSize(root->left)+treeSize(root->right);
}

int maxNode(Node* root){
    if(root==nullptr) return INT_MIN;
    int leftMax=maxNode(root->left);
    int rightMax=maxNode(root->right);
    return max(root->val,max(leftMax,rightMax));
}

int maxNode(Node *root)
{
    if (root == nullptr)
        return INT_MIN;
    int leftMax = maxNode(root->left);
    int rightMax = maxNode(root->right);
    return max(root->val, max(leftMax, rightMax));
}

int main() {
    
    Node* a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(345);
    Node *e = new Node(50);
    Node *f = new Node(60);

    a->left=b;
    a->right=c;
    
    b->left=d;
    
    d->right=e;

    e->left=f;

    //displayTree(a);
    int res = findSum(a);
    cout<<res<<endl;

    int sT=treeSize(a);
    cout<<sT<<endl;

    cout<<maxNode(a)<<endl;

    return 0;
}