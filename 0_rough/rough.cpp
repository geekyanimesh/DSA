#include <iostream>
#include <cmath>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=nullptr;
    }
};

int listSize(Node* head){
    int count = 0;
    if(head==nullptr) return 0;
    else if(head->next==nullptr) return 1;
    else{
        
        while(head!=nullptr){
            count++;
            head=head->next;
        }
    }
    return count;
}

int sizeNum(int num){
    int n=num;
    int ans=0;
    while(n>0){
        n/=10;
        ans++;
    }
    return ans;
}


bool findArmstrong(int num){
    int size=sizeNum(num);
    int newNum=0;
    int n = num;
    while(n>0){
        int unit=n%10;
        n/=10;
        newNum+=pow(unit,size);
    }
    if(newNum==num) return true;
    else return false;
}

int main() {
    
    Node *a = new Node(12);
    Node *b = new Node(13);
    Node *c = new Node(14);
    Node *d = new Node(15);

    a->next=b;
    b->next=c;
    c->next=d;

    int res=listSize(a);
    //cout<<res;

    cout<<findArmstrong(370)<<endl;



    return 0;
}