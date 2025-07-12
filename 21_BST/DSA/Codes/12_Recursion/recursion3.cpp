#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

void max(int arr[],int size,int idx,int maxm){
    //int maxm=INT_MIN;
    if(idx==size) return ;
    else{
        if(arr[idx]>maxm){
            maxm=arr[idx];
        }
    }
    max(arr,size, idx+1,maxm);
}
void hanoi(int n,char a,char b,char c){
    if(n==0) return ;
    else{
        hanoi(n-1,a,c,b);
        cout<<a<<"--"<<c<<endl;
        hanoi(n-1,b,a,c);
    }
}
int main()
{
    
//     int n=15;
//    hanoi(n,'A','B','C');

   // Maximum element of an array

    int arr[]={12,34,56,21,67};
    int size=sizeof(arr)/sizeof(arr[0]);
    max(arr,size,0,INT_MIN);

    // 01:34:00

 return 0;
}