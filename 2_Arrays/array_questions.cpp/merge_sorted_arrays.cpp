// Merge Two Sorted Arrays // ## LeetCode - 88

#include <iostream>
#include <vector>
using namespace std;

void display(vector <int> &vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

// Driver Code

int main(){

    int arr1[5]={1,3,5,8,9};
    int arr2[4]={2,4,6,7};

    int arr1_size = sizeof(arr1)/sizeof(arr1[0]);
    int arr2_size =  sizeof(arr2)/sizeof(arr2[0]);

    vector <int> v1(0);
    for(int i=0;i<arr1_size;i++){
        int check=arr1[i];
        v1.push_back(check);
    }

    for(int i=0;i<arr2_size;i++){
        int check=arr2[i];
        v1.push_back(check);
    }
    int j=v1.size()-1;
    for(int i=0;i<j;i++){
        for(int j=v1.size()-1;j>i;j--){
            if(v1[i]>v1[j]){
                swap(v1[i],v1[j]);
            }
        }
    }
    
    display(v1);


    return 0;
}



