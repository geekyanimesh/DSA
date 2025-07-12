#include <iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,4,5,5,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int newArr[size]={};
    newArr[0]=arr[0];
    bool flag=false;

    //prefixSum
    for(int i=1;i<size;i++){
        newArr[i]=arr[i]+newArr[i-1];
    }
    int idx=0;
    for(int i=0;i<size;i++){
        if(2*newArr[i]==newArr[size-1]){
            flag=true;
            idx=i;
            break;
        }
    }
    if(flag==true){
        cout<<idx;
    }else{
        cout<<"array invalid!";
    }

    cout<<endl;
    return 0;
}