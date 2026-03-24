#include <iostream>
#include <climits>
using namespace std;

// traversal is done by bfs and dfs

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
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}

int sumTree(Node* root){
    if(root==nullptr) return 0;
    return root->val + sumTree(root->left) + sumTree(root->right);
}

int sizeTree(Node* root){
    if(root==nullptr) return 0;
    int leftS=sizeTree(root->left);
    int rightS=sizeTree(root->right);
    return 1+leftS+rightS;
}

int findMaxNode(Node* root){
    if(root==nullptr) return INT_MIN;
    int maxSubTree = max(findMaxNode(root->left), findMaxNode(root->right));
    return max(root->val, maxSubTree);
}

int findLevels(Node* root){
   if(root==nullptr) return 0;
   return 1+max(findLevels(root->left),findLevels(root->right)); 
}

int main() {
    
    Node *a = new Node(1);  // root
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

    // displaying the tree
    displayTree(a);
    cout<<endl;
    cout<<sumTree(a);
    cout << endl;
    cout<<sizeTree(a);
    cout << endl;
    cout<<findMaxNode(a);
    cout<<endl;
    cout<<findLevels(a);

    return 0;
}