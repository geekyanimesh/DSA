#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

    string decimalToBinary(int num)
    {
        string s;
        while (num > 1)
        {
            int rem = num % 2;
            num /= 2;
            char x = rem + '0';
            s.push_back(x);
        }
        s.push_back('1');
        reverse(s.begin(), s.end());
        return s;
    }

    int concatenatedBinary(int n)
    {
        string res;
        for (int i = 1; i <= n; i++)
        {
            res += decimalToBinary(i);
        }
        long long result = 0;
        int power = 0;
        int size = res.length();
        for (int i = size - 1; i >= 0; i--)
        {
            int x = res[i] - '0';
            result += x * pow(2, power);
            power++;
        }
        return result;
    }

    int main(){
        cout << concatenatedBinary(3);
        return 0;
    }
