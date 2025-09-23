#include <iostream>
using namespace std;

int main() {
    
    int num=5;
    int *ptr=&num;
    (*ptr)++;

    cout<<sizeof(num)<<endl;
    cout << sizeof(ptr) << endl;

    cout<<num;
    

    return 0;
}

