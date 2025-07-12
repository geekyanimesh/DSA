#include <iostream>
#include<climits>
using namespace std;

int main() {
    
    // Sliding window
    int arr[]={1,0,1,2,1,1,7,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int currSum=0,maxSum=INT_MIN;

    // Provide value to currSum = Sum of the first window
    for(int i=0;i<k;i++){
        currSum+=arr[i];
    }

    int i=1,j=k,maxIdx=0;
    while(j<size){
        currSum=currSum+arr[j]-arr[i-1];
        if(maxSum<currSum){
            maxSum=currSum;
            maxIdx=i;
        }
        i++;
        j++;
    }

    cout<<maxSum<<" "<<maxIdx;

    cout<<endl;
    return 0;
} 