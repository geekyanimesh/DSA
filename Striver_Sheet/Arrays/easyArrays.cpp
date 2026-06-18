#include <iostream>
using namespace std;

int main() {
    
    int arr[7]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=3;

    // first window
    int windowSum=0;
    for(int i=0;i<k;i++){
        windowSum+=arr[i];
    }

    int maxWindow=windowSum;

    int i=0,j=k;
    while(j<size){
        windowSum=windowSum-arr[i]+arr[j];
        maxWindow=max(windowSum,maxWindow);
        i++;
        j++;
    }

    cout<<maxWindow<<endl;

    return 0;
}