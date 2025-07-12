// This contains questions for sorting
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    
    int arr[5]={0,4,3,0,4};
    int size=5,idx=0,target=3;
    sort(begin(arr),end(arr));
    int start=0,end=size-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]<target){
               start=mid+1;
               idx=arr[mid];
        }else if(arr[mid]>target){
                end=mid-1;
        }
    }

    cout<<size-idx;
    cout<<"Hello";

    return 0;
}