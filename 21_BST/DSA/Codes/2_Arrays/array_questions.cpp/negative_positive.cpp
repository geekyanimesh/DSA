#include<iostream>
#include <vector>
using namespace std;

void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    int arr[7]={1,-4,5,6,-9,-10,2};
    int size=sizeof(arr)/sizeof(arr[0]);

    int i=0,j=size-1;
    while(i<j){
        if(arr[i]<0){
            i++;
        }if(arr[j]>0){
            j--;
        }if(arr[i]>0&&arr[j]<0){
            swap(arr[i],arr[j]);
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}