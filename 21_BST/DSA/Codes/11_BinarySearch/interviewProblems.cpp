#include<iostream>
using namespace std;
int main()
{

   /*1. Peak Index in Mountain Array  [LeetCode 852]*/

   int arr[]={1,3,5,4,3,2,0};
   int size=sizeof(arr)/sizeof(arr[0]);
   int lo=0,hi=size-1;
   int idx=0;
   while(lo<=hi){
    int mid=lo+(hi-lo)/2;
    if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1]){
        idx=mid;
        break;
    }else if(arr[mid-1]<arr[mid]&&arr[mid]<arr[mid+1]){
        lo=mid+1;
    }else if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1]){
        hi=mid-1;
    }
    
   }

   cout<<idx;

   /*2. */

 return 0;
}