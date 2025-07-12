#include <iostream>
using namespace std;

// void display(int arr[],int size){
//     for(int i=0;i<5size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void change(int b[]){
//     b[0]=100;
// }

int main(){
    
    // Passing arrays to functions

    int arr[]= {1,4,2,7,4};

    // Character array:

    char ch[3]={'a','b','$'};

    // display(arr);

    // Updating values with functions

    // change(arr);
    // cout<<endl;
    // display(arr);

    // sizeof array

    // int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<size;

// Array and Pointers

    int arr1[]={1,2,3,4,5};

    // Creating Pointer

    int *ptr= arr;  // Correct way

    int *ptr2=&arr[0]; // Correct way for indiviudal elements

    // cout<<ptr<<" "<<ptr2;


    // Interesting case: 

    cout<<ptr[0]<<endl;

    // Printing entire array

    // for(int i=0;i<5;i++){
    //     cout<<ptr[i]<<" ";
    // }

    //  ptr=arr;

    //  *ptr=8;
    //  ptr++;
    //  *ptr=9;
    //  ptr--;

// For printing i[arr] is also valid like arr[i].

    



    return 0;
}