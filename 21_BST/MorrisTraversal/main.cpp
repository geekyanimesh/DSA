#include <iostream>
#include<vector>
using namespace std;

// Morris Traversal: A type of inorder traversal

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

vector<int> Morris(Node* root, vector<int> &ans){
    Node* curr=root;
    while(curr!=nullptr){
        if(curr->left!=NULL){       // find predecessor
            Node* pred= curr->left;
            while(pred->right!=nullptr && pred->right!=curr){
                pred=pred->right;
            }
            if(pred->right==nullptr){
                pred->right=curr;
                curr=curr->left;
            }else{      // pred->right==curr
                pred->right=nullptr;
                ans.push_back(curr->val);
                curr=curr->right;
            }
        }else{  // visit and print
            ans.push_back(curr->val);
            curr=curr->right;
        }
    }
    return ans;

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

    vector<int> res;
    Morris(a,res);

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
 
    return 0;
}