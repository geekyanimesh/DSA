#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

void display(vector <int > vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}

void change(vector <int> a ){
    a[0]=100;
}

int main()
{

    // Declaration 

    vector <int > vec; // no need to mention the size

     vec.push_back(6);
     vec.push_back(7);
     vec.push_back(8);
     
    //  display(vec);

    // vec[1]=1; /*this is a wrong way to adding 
               // elements into a vector and will 
              // throw a segmentation fault*/ 
    
    // Size of a vector:

    // int size= vec.size();
    // cout<<size;

    // Capacity of a vector:

    // int capacity = vec.capacity();
    // cout<<capacity;

    // Pop_back :removes the last element in an array.

    //  vec.pop_back();
    //  display(vec);
     
     // Initialization

   //  vector <int> vec_2 (5,7);

    /*This will create a vector of size 5 and each 
    element equal to 7.*/
     
    // display(vec_2);

    // Taking input

    // vector <int> vec_3(6);
    // for(int i=0;i<vec_3.size();i++){
    //     cin>>vec_3[i];
    // }

    /*The above method might throw an error*/

    // vector <int> vec_4;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     vec_4.push_back(x);
    // }

     // at method :

    // cout<<vec_4.at(3)<<endl;

     // sort method:

    //  sort(vec_4.begin(),vec_4.end());
    //  display(vec_4);


    // NOTE:  Vectors a passed by value unlike arrays

    //  vector <int> vec_5(5);
    //    for(int i=0;i<5;i++){
    //     int x;
    //     cin>>x;
    //     vec_5.push_back(x);
    // }

    // display(vec_5);
    // cout<<endl;

    // change(vec_5);
    // display(vec_5);

// The values do not get changed! 

// Solution :
 // void change(vector <int> &change){}

    // Questions

   // Q1. Array in reverse order:

    // int arr[5]={1,2,3,4,5};
    // vector <int> vec(0);
    // for(int i=4;i>=0;i--){
    //     int x= arr[i];
    //     vec.push_back(x);
    // }

    // for(int i=0;i<vec.size();i++){
    //     cout<<vec[i]<<" ";
    // }

    // Q2. Reverse without any extra array (Two pointers).

    // vector <int> vec(5);
    // for(int i=0;i<vec.size();i++){
    //     cin>>vec[i];
    // }

    // Using while loop :

    // int i=0,j=vec.size()-1;
    // while(i<=j){
    //     int temp= vec[i];
    //     vec[i]=vec[j];
    //     vec[j]=temp;
    // }

   // display(vec);

    // Using for loop

//    for(int i=0,j=vec.size()-1;i<=j;i++,j-- ){
//         int temp= vec[i];
//         vec[i]=vec[j];
//         vec[j]=temp;
//     }

//     display(vec);

    //




 return 0;
}