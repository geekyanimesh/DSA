#include <iostream>
using namespace std;
class Node{     //  LinkedList Node
public:
    int val;
    Node *next;

    // constructor for storing values

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main() {
    
    // 10 20 30 40

    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    
// Forming LinkedList

    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;

// Priting value of b w/o using b

   // cout<<(a.next)->val<<endl;      // b value
   // cout<<(b.next)->val;            // c value

// Printing different values from a single node

    //cout<<((a.next)->next)->val<<endl;    // c ka addresss a se
    ///cout<<(((a.next)->next)->next)->val;

// using for loop
    Node temp=a;
    while(true){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp=*(temp.next);          
    }
    /*  temp.next is the address of b and 
        ' * ' of any pointer is the variable
        itself*/
    
    // aliter

    
    
    cout<<endl;
    return 0;
}