#include<iostream>
#include <vector>
using namespace std;
int main()
{
    // Declaring 2D vector

    vector <vector<int>> vec;

    // Number of rows

    int rows= vec.size();

    // Number of columns

    int col= vec[0].size();

    // Declaring matrix

    int rows=3;
    int col=3;

    vector<vector<int>> vec(rows,vector<int>(col));

    
 return 0;
}