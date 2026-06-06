#include <iostream>
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

void PredisplayTree(Node* root){
    if(root==nullptr) return;
    cout<<root->val<<" ";
    PredisplayTree(root->left);
    PredisplayTree(root->right);
}

void IndisplayTree(Node *root)
{
    if (root == nullptr)
        return;
    IndisplayTree(root->left);
    cout << root->val << " ";
    IndisplayTree(root->right);
}

void PostdisplayTree(Node *root)
{
    if (root == nullptr)
        return;
    PostdisplayTree(root->left);
    PostdisplayTree(root->right);
    cout << root->val << " ";
}

int main() {

    Node *a = new Node(1); // root
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    PredisplayTree(a);
    cout<<endl;
    IndisplayTree(a);
    cout<<endl;
    PostdisplayTree(a);

    return 0;
}