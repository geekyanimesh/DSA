#include <iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    int rollNo;
    float marks;

    // constructor for putting values

    Student(string name,int rollNo,float marks){
        this->name=name;
        this->rollNo=rollNo;
        this->marks=marks;
    }
};

void change(Student *s){
    s->name="Animesh";
}

int main() {
    
    // wihtout constructor
    
    // Student Animesh;
    // Animesh.name="Animesh";
    // Animesh.marks=96;
    // Animesh.rollNo=06;

    // using constructor

    Student s("Animesh",06,90.32);
  //  cout<<s.name;

// Using pointers to store classes

   // Student *ptr=&s;
   // cout<<(*ptr).name;

// Changing values through pointers

    // (*ptr).name="Kumar";
    // cout<<(*ptr).name<<endl;

// Same thing different technique

    // ptr->name="New name";
    // cout<<s.name<<endl;

// "this" in above is code is actually a pointer

// Function to change values using pointers

    // change(&s);
    // cout<<s.name<<endl;

// using a different way -> creating the object as an pointer

    Student *ptr2=new Student("AnimeshOld",07,90.45);
    cout<<ptr2->name;
    change(ptr2);
    cout<<ptr2->name;

    cout<<endl;
    return 0;
}