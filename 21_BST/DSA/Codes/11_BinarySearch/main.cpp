#include<iostream>
using namespace std;
int main()
{

    int arr[]={1,23,54,66,98};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=66;
    
    // Binary search

    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;

        if(arr[mid]==target){
            cout<<mid;
            break;
        }else if(arr[mid]>target){
            high=mid-1;
        }else if(arr[mid]<target){
            low=mid+1;
        }else{
            cout<<"Target not present";
        }
    }
              
    

 return 0;
}