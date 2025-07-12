                                       // Pointers

#include <iostream>
using namespace std;

// void swap(int a,int b){
//     int temp=a;
//     a=b;
//     b=temp;
// }

// void swap_correct(int* x,int* y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }


// void swap_alias(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
// }

// void first_last(int *x){
//     int ld=(*x)%10;
//     while(*x>9){
//         (*x)/10;
//     }
//    int fd=*x;
//    cout<<"First digit: "<<fd<<endl;
//    cout<<"Last digit: "<<ld;
// }

int main(){

    // int a,b;
    // cin>>a>>b;
    // swap(a,b);
    // int temp=a;
    // a=b;
    // b=temp;

    // cout<<"a: "<<a<<" b: "<<b;
    // return 0;

    // Address of variables:

    //int a = 5;

// Values of a :

    //cout<<a;

// Address of a:

    //cout<<&a;

// Storing address:

    // int x=5;
    // int* p= &x;
    // cout<<&x;
    // cout<<"\n"<<p;

// An error

    // float x=3.5;
    // int* p= &x;
    // cout<<&x;
    // cout<<"\n"<<p;

// Fixing the error:

    // float x=5;
    // float* p= &x;
    // cout<<&x;
    // cout<<"\n"<<p;

/* Allocate same data type pointers for the given
data type of variables */

// Dereferencing Operator:

    // int temp= 34;
    // int* p_2=&temp;
    // cout<<*p_2;    // give the value stored
    // cout<<p_2;    // give the address of the variable

// Updating the variables with pointers:

    // int temp_1= 45;
    // int* temp_1_p= &temp_1;
    // *temp_1_p=56;
    // cout<<*temp_1_p;

// Sum of two numbers using poninters;

    // int num1=56;
    // int num2=45;
    // int* num1_p=&num1;
    // int* num2_p=&num2;
    // int num_res= *num1_p + *num2_p;
    // cout<<num_res;

// Taking input with pointers:

    // int x,y;
    // int* x_p=&x;
    // int* y_p=&y;
    // cin>>*x_p>>*y_p;
    // cout<<x+y;

// Pass by value and Pass by reference:

// Correct swap function

    // int a,b;
    // cin>>a>>b;
    // swap_correct(&a,&b);
    // cout<<a<<" "<<b;

// Pass by refernece using "Alias":

//          ***** 01:00:04 *****

    // int a,b;
    // cin>>a>>b;
    // swap_alias(a,b);
    // cout<<a<<" "<<b;

// Increment & Decrement operators

    // int m_1=4;
    // int *p_inc=&m_1;
    // cout<<p_inc<<endl;
    // p_inc=p_inc+1;
    // cout<<p_inc;

 /* The address is getting incremented by 4 bytes
    since the size of integer is 4 bytes */

    // int m_1=4;
    // int *p_inc=&m_1;
    // cout<<p_inc<<endl;
    // *p_inc=*p_inc+1;
    // cout<<*p_inc;

// Here the integer is getting incremented

    // int m_1=4;
    // int *p_inc=&m_1;
    // cout<<p_inc<<endl;
    // p_inc=p_inc+1;
    // cout<<*p_inc;

 /*Here garbage value is getting printed since there
   is no value present at the incremented address */


// Null Pointer:

    // int *ptr= NULL;
    // cout<<ptr;

// Printing ASCII value

    // char ch= 'a';
    // cout<<(int)ch;


     return 0;
}