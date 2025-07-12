#include<iostream>
using namespace std;
int main()
{


   int arr[7] = {1,2,3,4,5,6,7};
   int i=0,j=sizeof(arr)/sizeof(arr[0])-1;
   int k;
   cin>>k;


    cout<<"Before rotation: "<<endl;
  for(int i=0;i<(j+1);i++){
    cout<<arr[i]<<" ";
 }

   while(i<=k){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;

    i++;
    j--;
    k--;
   }
  cout<<"After rotation: "<<endl;
  for(int i=0;i<=(j+2);i++){
    cout<<arr[i]<<" ";
 }

 
 return 0;
}