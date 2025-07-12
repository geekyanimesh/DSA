#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedQueue {
public:
    Node* head;
    Node* tail;
    int size;

    LinkedQueue() {
        head = tail = NULL;
        size = 0;
    }

    void push(int x) {
        Node* temp = new Node(x);
        if (tail == NULL) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void pop() {
        if (head == NULL) {
            cout << "Queue is empty!" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head == NULL) {
            tail = NULL;
        }
        delete temp;
        size--;
    }

    int getSize() {
        return size;
    }

    int getFront() {
        if (head == NULL) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return head->val;
    }

    int getBack() {
        if (tail == NULL) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return tail->val;
    }

    bool isEmpty() {
        return head == NULL;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedQueue q;

    q.push(10);
    q.push(20);
    q.push(30);

    q.display(); 

    cout << "Front: " << q.getFront() << endl; 
    cout << "Back: " << q.getBack() << endl;   
    cout << "Size: " << q.getSize() << endl;   

    q.pop();
    q.display(); 

    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl; 
    return 0;
}
