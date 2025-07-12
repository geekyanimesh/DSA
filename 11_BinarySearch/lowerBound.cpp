#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int arr[9]={1,2,4,5,9,15,18,21,24};
    int n=9;
    int x=19;

  // lower bound : Through linear search
    // for(int i=0;i<9;i++){
    //     if(arr[i]>x){
    //         cout<<arr[i-1];
    //         break;
    //     }
    // }

 // lower bound : Through Binary Search

     int lo=0;
     int hi=n-1;
     bool flag=false;
     while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            flag=true;
            cout<<arr[mid-1];
            break;
        }else if(arr[mid]>x){
            hi=mid-1;
        }else if(arr[mid]<x){
            lo=mid+1;
        }
     }
     if(flag==false){
        cout<<arr[hi];
     }

  /*For upperbound the entire code is same except at last
                    if(flag==false){
                    cout<<arr[lo];
                    }
*/
 return 0;
}