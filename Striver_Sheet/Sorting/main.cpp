#include <iostream>
#include <climits>
using namespace std;

int minM=INT_MAX;
int maxM=INT_MIN;

void swap(int &a, int &b){
    int c=a;
    a=b;
    b=c;
}

void selectionSort(int arr[], int k = 6)
{
    for (int i = 0; i < k - 1; i++)
    {
        int minM = i; 

        for (int j = i + 1; j < k; j++)
        {
            if (arr[j] < arr[minM])
            {
                minM = j;
            }
        }

        swap(arr[i], arr[minM]);
    }
}

void bubbleSort(int arr[], int k=6)
{ // In bubble sort after each pass, the largest element is already at the end
    for(int i=0;i<k;i++){
        bool isSwap=false;
        for(int j=0;j<k-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }   
        }
        if(isSwap==false) break;
    }
}

void insertionSort(int arr[], int k=6){
    for(int i=1;i<k;i++){
        int pivot=arr[i];
        int lastIdx=i-1;
        while(lastIdx>=0 && pivot<arr[lastIdx]){
            arr[lastIdx+1]=arr[lastIdx];
            lastIdx--;
        }
        arr[lastIdx+1]=pivot;
    }
}

void merge(int arr[], int s, int mid, int e)
{
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // create temp arrays
    int left[len1], right[len2];

    // copy data
    for (int i = 0; i < len1; i++)
        left[i] = arr[s + i];

    for (int i = 0; i < len2; i++)
        right[i] = arr[mid + 1 + i];

    int i = 0, j = 0;
    int k = s;

    // merge both arrays
    while (i < len1 && j < len2)
    {
        if (left[i] <= right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
        }
    }

    // copy remaining elements
    while (i < len1)
    {
        arr[k++] = left[i++];
    }

    while (j < len2)
    {
        arr[k++] = right[j++];
    }
}

void mergeSort(int arr[], int s, int e){
    if(s>=e) return;
    int mid = s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr, s, mid, e);
}

int main() {
    
    int arr[6]={3,2,5,1,6,4};

    //selectionSort(arr);
    //bubbleSort(arr);
    insertionSort(arr);

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}