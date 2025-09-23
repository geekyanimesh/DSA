#include <iostream>
using namespace std;

int main() {
    
    // int arr[10];
    // cout<<arr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<arr[0]<< endl;
    // cout<<*arr<< endl;

    int arr2[10]{1,2,3};

    cout<<arr2<<endl;
    cout<<arr2[0]<<endl;
    cout<<*arr2<<endl;
    cout<<*arr2+1<<endl;
    cout << *(arr2 + 1) << endl;
    cout << *(arr2 + 1)+1 << endl;
    
    

    return 0;
}