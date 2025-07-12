#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    
    int arr[]={-1,-8,0,5,-9};
    int n=5;

    // Sort the array
    sort(begin(arr),end(arr));
    // [-9,-8,0,1,5]

    // Suffix array
    int suffix[n];
    suffix[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]+arr[i];
    }

    // finding pivot
    int idx=-1;
    for(int i=0;i<n;i++){
        if(suffix[i]>=0){
            idx=i;
            break;
        }
    }

    int maxSum=0;
    int j=0;
    // printing answer
    for(int i=idx;i<n;i++){
        maxSum+=suffix[i]*=j;
        j++;
    }
    cout<<maxSum;

    cout<<endl;
    return 0;
}