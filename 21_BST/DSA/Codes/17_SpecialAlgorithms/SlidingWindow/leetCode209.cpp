#include <iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
        int nums[]={2,3,1,2,4,3};
        int target=7;
        int n=6;
        int i=0,j=0,len=0,sum=0;
        int minLen=INT_MAX;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                len=j-i+1;
                minLen=min(minLen,len);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        if(minLen==INT_MAX) return 0;
        return minLen;
}
