#include<iostream>
using namespace std;

// nth fibonacci number
// int fibo(int n){
//     if(n<2){
//         return  n;
//     }else{
//         return fibo(n-1)+fibo(n-2);
//     }
// }

/**
 * Power using logarithm
 * This code will help us to find out the
 * exponential power with time complexity in log(n)
 */
// int pow(int x,int n){
//     if(n==0){
//         return 1;
//     }if(n==1){
//         return x;
//     }else{
//         // creating a variable to store the value so that
//         //we don't have to call again and again
//         int ans=pow(x,n/2);
//         if(n/2%2==0){
//             return ans*ans;
//         }else{
//             return ans*ans*x;
//         }

//         }
// }

// Stair Path : Similar to Fibonacci Series.

// int stair_path(int stairs){
//     if(stairs==2){
//         return 2;
//     }if(stairs==1){
//         return 1;
//     }else{
//         return stair_path(stairs-1)+stair_path(stairs-2);
//     }
// }

// Maze Path

// int maze(int sr,int sc,int er,int ec){
//     if(sr>ec||sc>ec){
//         return 0;
//     }if(sr==er&&sc==ec){
//         return 1;
//     }else{
//         int rightways=maze(sr,sc+1,er,ec);
//         int downways=maze(sr+1,sc,er,ec);
//         return rightways+downways;
//     }
// }


int main()
{

    // int n=10;
    // for(int i=1;i<n;i++){
    //     cout<<fibo(i)<<" ";
    // }

    
    //    int x=2,n=4;
    //    cout<<pow(x,n);

    // cout<<stair_path(4);

    //cout<<maze(1,1,3,4);


    /** // 01:54:00 */

    // Pre In Post : Doubt
    
    

 return 0;
}     