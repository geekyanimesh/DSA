#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

typedef pair<int,int> pp;

//custom comparator
bool cmp(pp &p1,pp & p2){

    // pp - pair<int,int> - pair1 - value, pair2 - weight

    double r1= (p1.first*1.0)/(p1.second*1.0);
    double r2= (p2.first*1.0)/(p2.second*1.0);

    return r1 > r2;

}


int fractionalKnapsack(vector<int> profit, vector<int> weights, int n, int w){
    vector<pp> arr;
    for(int i=0;i<n;i++){
        arr.push_back({profit[i],weights[i]});
    }
    sort(arr.begin(),arr.end());
    double result = 0;
    for(int i=0;i<n;i++){
        if(arr[i].second<=w){
            result+= arr[i].first;
            w -= arr[i].second;
        }else{
            result += ((arr[i].first*1.0)/(arr[i].second*1.0))*w;
            w=0;
            break;        
        }
    }
    return result;
}


int main() {
    
    vector<int> profit ={60,100,120};
    vector<int> weights ={10,20,30};

    int w=50;
    int n=3;

    cout<<fractionalKnapsack(profit,weights,n,w)<<"\n";
     
    return 0;
}

// lc 881