#include<iostream>
using namespace std;
int main()
{

     int arr[]={5,30,1,-4,2};
     int n=5;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;

     // Insertion Sort

    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                j--;
           }
    }

    // printing again
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    /*Insertion sort is a stable sort*/

    return 0;
}