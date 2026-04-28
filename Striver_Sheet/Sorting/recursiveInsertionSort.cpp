#include <iostream>
using namespace std;


void recursiveInsertion(int arr[], int n, int i=1){
    if(i==n) return;

    int j=i;
    while(j>0 && arr[j]<arr[j-1]){
        swap(arr[j], arr[j-1]);
        j--;
    }

    recursiveInsertion(arr,n,i+1);
}

int main() {

    int arr[5] = {5, 1, 4, 2, 8};

    recursiveInsertion(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}