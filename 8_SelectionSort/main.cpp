#include<iostream>
#include<climits>
using namespace std;
int main()
{

    int arr[]={5,3,1,4,2};
    int n=5;
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    // Selection Sort

    for (int i = 0; i < n-1; i++) {
       int minIndex = i; // Assume the current position is the smallest
       for (int j = i+1; j < n; j++) {
         if (arr[j] < arr[minIndex]) {
           minIndex = j; // Update minIndex if a smaller element is found
            }
        }
        // Swap the found minimum element with the current element
        swap(arr[minIndex], arr[i]);
    }

    // printing after sorting
    
    for(int ele:arr){
        cout<<ele<<" ";
    }

    // stability of selection sort

    /*Selection sort is an unstable sort*/




 return 0;
}