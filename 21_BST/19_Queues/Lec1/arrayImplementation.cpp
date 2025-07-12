#include <iostream>
#include<queue>
using namespace std;

class arrayQueue{
public:

    int size;
    int front;
    int back;
    int arr[5];
    
    arrayQueue(){
        front=0;
        back=0;
        size=5;
    }

    void push(int val){
        if(back==5){
            cout<<"Overflow"<<endl;
            return ;
        }else{
            arr[back]=val;
            back++;
        }
        size++;
    }

    void pop(){
        if(back-front==0){
            cout<<"Queue is Empty";
            return ;
        }else{
            front++;
            size--;
        } 
    }

    void display(){
        for(int i=front;i<back;i++){
            cout<<arr[i]<<" ";
        }
    }

    int getSize(){
        return back-front;
    }

    bool isEmpty(){
        if(back-front==0){
            return true;
        }else{
            return false;
        }
    }

    int getFront(){
        return arr[front];
    }

    int getBack(){
        return arr[back-1];
    }

};

int main() {
    
    arrayQueue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.display();

    q.pop();
    q.push(60);
    q.display();

    cout<<q.getFront()<<endl;
    cout<<q.getBack()<<endl;
    cout<<q.getSize()<<endl;
    cout<<q.isEmpty();


    return 0;
}