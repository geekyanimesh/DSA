#include <iostream>
using namespace std;

int main() {
    
       int k=3;
       int arr[]={1,0,1,2,1,1,7,5};
       int sat[]={0,1,0,1,0,1,0,1};
        int n=sizeof(arr)/sizeof(arr[0]);
        int prevloss=0;
        int maxIdx=0;
        for(int i=0;i<k;i++){
            if(sat[i]==1){
                prevloss+=arr[i];
            }
        }

        int i=1,j=k;
        int maxLoss=prevloss;
        while(j<n){
            int currSum=prevloss;
            if(sat[i-1]==1){
                currSum-=arr[i-1];
            }
            if(sat[j]==1){
                currSum+=arr[j];
            }
            if(maxLoss<currSum){
            maxLoss=currSum;
            maxIdx=i;
           }
        prevloss=currSum;
        i++;
        j++;
        }

        for(int i=maxIdx;i<maxIdx+k;i++){
            sat[i]=0;
        }
    int sum=0;
    for(int i=0;i<n;i++){
        if(sat[i]==0){
            sum+=arr[i];
        }
    }
    cout<<sum;
    
}

