#include <iostream>
#include<vector>
using namespace std;

int lowerBound(vector<int> vec, int x){
    int n=vec.size();
    int s=0,e=n-1;
    int ans=n;

    while(s<=e){
        int mid=s+(e-s)/2;
        if(vec[mid]>=x){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return ans;
}

int main() {
    
    vector<int> vec({1,2,3,4,5});
    cout<<lowerBound(vec,4);

    return 0;
}