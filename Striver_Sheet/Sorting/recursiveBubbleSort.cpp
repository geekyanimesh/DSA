#include <iostream>
using namespace std;

void bubblePass(int arr[], int n, int i=0)
{
    if(i==n-1) return;
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }

    bubblePass(arr, n, i + 1);
}

void recursiveBubble(int arr[], int n){
    if(n==1) return;
    bubblePass(arr, n, 0);
    recursiveBubble(arr, n-1);
}

int main() {

    int arr[6] = {5,1,4,2,8};

    bubblePass(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}