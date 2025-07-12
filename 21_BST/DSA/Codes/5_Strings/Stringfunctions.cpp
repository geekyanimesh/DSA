#include<iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
   // Built in functions

    string s= "Animesh has black eyes ";

    // 1. Finding size:
    // cout<<s.size();
    // cout<<endl;
    // cout<<s.length();

    // 2. Push_back
    // s.push_back('e');
    // cout<<s;
    // Error case: passing a string
    // s.push_back('def');
    // cout<<s;

    // 3. Pop_back
    // s.pop_back();
    // s.pop_back();
    // cout<<s;

    // 4. "+" operator : Append (aage lagana)

    // string s1 = "abc";
    // string s2 = "def";
    // s1=s1+s2;
    // cout<<s1;

    // Error case:
    // s2= s1+ 123;

    // Right case:
    // s2= s1+ "123";

    // 5. reverse()
    // reverse(s.begin(),s.end());
    // cout<<s;

    // reversing from specific indices
    // reverse(s.begin()+2,s.end());
    // cout<<s;

    /*Input a string of even lenght and reverse
    the first half of the string*/

   //  string ques_1;
   //  getline(cin,ques_1);
   //  int siz=ques_1.size();
   //  int length= siz/2;
   //  reverse(ques_1.begin(),ques_1.begin()+length);
   //  cout<<ques_1;

    // 6. to_string() : converts integer to string

   // int n= 12345;
   // string s_n= to_string(n);
   // cout<<s_n;

   /* Return the total number of digtis in a number 
   without using loops*/

//   int x= 42343243;
//   string s_num=to_string(x);
//   cout<<s_num.size(); 

   

 return 0;
}