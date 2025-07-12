#include <iostream>
using namespace std;

class minHeap{
public:
    int idx;
    int arr[50];

minHeap(){
    this->idx=1;
}

int top(){
    return arr[1];
}

void push(int x){
    arr[idx]=x;
    int i=idx;
    idx++;
    // swapping til; i ==1
    while(i!=1){
        int pIdx=i/2;
        if(arr[pIdx]>arr[i]){
            swap(arr[pIdx],arr[i]);
        }else{
            break;
        }
        i=pIdx;
    }
}

void pop(){
    idx--;
    arr[1]= arr[idx];
    int i=1;
    while(true){
        int l = 2*i, r=2*i+1;

        if(l>idx-1) break;
        if(r>idx-1){
            if(arr[i]>arr[l]){
                swap(arr[i],arr[l]);
                i=l;
            }
        } 
        if(arr[l]<arr[r]&&arr[i]>arr[l]){
            swap(arr[i],arr[l]);
            i=l;
        }else{
            swap(arr[i],arr[r]);
            i=r;
        }
    }

}

int size(){
    return idx-1;
}

};

int main(){

    minHeap m;
    m.push(5);
    m.push(6);
    m.push(7);
    m.push(8);

    for(int i=0;i<m.size();i++){
        cout<<m.arr[i]<<" ";
    }

    cout<<endl;
    cout<<m.size();


    // 02:06:46 remaining

}