#include <iostream>
using namespace std;

int main() {
    
    int arr[]={1,2,3,4};
    int size=4;

    //prefix
    int pp[size]={};
    pp[0]=arr[0];
    pp[1]=arr[1];
    for(int i=2;i<size;i++){
        pp[i]=arr[i-1]*pp[i-2];
    }

    //suffix
    int sp[size]={};
    sp[size-1]=arr[size-1];
    sp[size-2]=arr[size-2];
    for(int i=size-3;i>=0;i--){
        sp[i]=arr[i-1]*sp[i-2];
    }
    int ans[size]={};
    for(int i=0;i<size;i++){
       ans[i]=pp[i]*sp[i];
    }

    for(int i=0;i<size;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}