#include <iostream>
#include <vector>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void arr_display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void vec_display(vector <int> &vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}
int main()
{

   // int arr[8]={1,0,0,1,1,0,1,0};

   // int size= sizeof(arr)/sizeof(arr[0]);

   vector <int> vec(0);
   
   vec.push_back(1);
   vec.push_back(0);
   vec.push_back(0);
   vec.push_back(1);
   vec.push_back(0);


    int i=0,j=vec.size()-1;

    while(i<j){
        if(vec[i]==0){
            i++;
        }if(vec[j]==1){
            j--;
        }if(vec[i]==1&&vec[j]==0){
            swap(vec[i],vec[j]);
            // int temp=vec[i];
            // vec[i]=vec[j];
            // vec[j]=temp;
            i++;
            j--;
        }
    }

    vec_display(vec);

 return 0;
}