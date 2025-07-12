#include<iostream>
using namespace std;


// Function calling itself
// void greet(int x){
//     if(x==0)return ;
//     cout<<"Hey"<<endl ;
//     greet(x-1);
// }

// Classwork
// void good_morning(int n){
//     if(n==0) return ;
//     cout<<"Good Morning"<<endl;
//     good_morning(n-1);
// }

// int factoria(int fact){
     //base case
//     if(fact==1)return 1;
    //recursive call
//    return fact*factoria(fact-1);
// }

// void printNums(int num){
//     if(num<=1)return ;
//     cout<<num<<" ";
//      printNums(num-1);
// }

// Sum 1 to N parameterised :
//  void sum1toN(int sum,int n){
//     if(n==0){
//         cout<<sum;
//         return ;
//     }else{
//         sum1toN(sum+n,n-1);
//     }
//  }


 // Sum 1 to N (return type)
//     int sum(int n){
//     int num=n;
//     if(n==0){
//         return 0;
//     }else{
//         return n+sum(n-1);
//     }
// }

// a raised to the power b:
    int power(int dig,int pow){
       if(pow==0){
        return 1;
       }else{
        return dig*power(dig,pow-1);
       }
    }

int main()
{
    // Eg-1

    // greet(4);
     
    // Class work

    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // good_morning(n);

    // Factorial

 //  cout<< factoria(5);

    // int num=6;
    // printNums(num);
 
     
     // Sum 1 to N parameterised :
    //  int n=10;
    //  sum1toN(0,n);

     // Sum 1 to N (return type)

//    int res=sum(10);
//    cout<<res;

    // a raised to power b:
    cout<<power(2,4);

 return 0;
}