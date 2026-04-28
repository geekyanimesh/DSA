#include <iostream>
using namespace std;

// void printNTimes(string s, int n){
//     if(n==0) return;
//     cout<<s<<endl;
//     printNTimes(s,n-1);
// }

// void print1ToN(int n){
//     if(n==0) return;
//     print1ToN(n-1);
//     cout<<n<<endl;
// }

// int factorial(int n){
//     if(n<2) return 1;
//     return n*factorial(n-1);
// }

void reverseArray(int arr[], int left, int right){
    if(left>=right) return;
    swap(arr[left],arr[right]);
    reverseArray(arr,left+1, right-1);
}

int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}
int main() {
    
    // string s="Animesh";
    // printNTimes(s,5);

    //print1ToN(50);

    // int res=factorial(5);
    // cout<<res;

    // int arr[]={1,2,3,4,5};
    // int k=5;
    // reverseArray(arr,0,k-1);

    // for(int i=0;i<k;i++){
    //     cout<<arr[i]<<" ";
    // }

    for(int i=0;i<5;i++){
        cout<<fibo(i)<<" ";
    }

    
    return 0;
}