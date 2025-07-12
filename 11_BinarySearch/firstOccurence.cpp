#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{

  int arr[]={1,2,2,3,3,3,3,3,4,4,5,8,9};
  int n=sizeof(arr)/sizeof(arr[0]);
  bool flag=false;
  int target=3;

  int start=0,end=n-1;
  while(start<=end){
    int mid= start+(end-start)/2;
    if(arr[mid]==target){
      flag=true;
      if(arr[mid-1]!=target){
            cout<<mid;
            break;
      }
    }else if(arr[mid]>target){
      end=mid-1;
    }else if(arr[mid]<target){
      start=mid+1;
    }
  }

  if(flag==false){
    cout<<"Not present";
  }


 return 0;
}