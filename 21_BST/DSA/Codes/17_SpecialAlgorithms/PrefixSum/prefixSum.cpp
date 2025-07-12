#include <iostream>
using namespace std;

// prefixSum function
void prefixSum(int arr[],int size,int newArr[]){
    newArr[0]=arr[0];
     for(int i=1;i<size;i++){
        newArr[i]=arr[i]+newArr[i-1];
    }
}
int main() {

    int arr[]={6,12,19,26,34};
    int size=sizeof(arr)/sizeof(arr[0]);
    int newArr[size]={};
    prefixSum(arr,size,newArr);
    for(int i=0;i<size;i++){
        cout<<newArr[i]<<" ";
    }

    return 0;
}