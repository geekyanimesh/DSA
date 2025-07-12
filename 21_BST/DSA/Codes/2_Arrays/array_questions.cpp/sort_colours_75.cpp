
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int arr[]={2,0,2,1,1,0};
    int size=sizeof(arr)/sizeof(arr[0]);

    // Output = [0,0,1,1,2,2]

    // Two pass algo

    // Counting the number of zeros,ones and twos

    // int zeros,ones,two;

    // for(int i=0;i<size;i++){
    //     if(arr[i]==0){
    //         zeros++;
    //     }if(arr[i]==1){
    //         ones++;
    //     }if(arr[i]==2){
    //         two++;
    //     }
    // }

    //  for(int i=0;i<size;i++){
    //     if(i<zeros){
    //         arr[i]=0;
    //     }if(i<(zeros+ones)){
    //         arr[i]=1;
    //     }if(i<(zeros+ones+two)){
    //         arr[i]=2;
    //     }
    //  }

    //   for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    //   }

    // Dutuch Flag algo

    // 01:01:24


    return 0;
}