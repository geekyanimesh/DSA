#include<iostream>
#include<string>
using namespace std;
int main()
{

    // Initialization
    //   char str[]={'a','b','c',};
    //   for(int i=0;i<3;i++){
    //     cout<<str[i]<<" ";
    // }
    //2nd way
   // cout<<endl;

  //  char str2[5]="abcd";
    // for(int i=0;i<3;i++){
    //     cout<<str2[i]<<" ";
    // }
     
     // "\" can never be printed i.e special character

     // Null character : "\0"

    //  char null_char= '\0';
    //  cout<<null_char;  // nothing will be printed

     // But ASCII value will be printed

     //cout<<(int)null_char;

      // Another proof

     // cout<<(int)(str2[5]);

    // Another way of printing

    // for(int i=0;str2[i]!='\0';i++){
    //   cout<<str2[i]<<" ";
    // }

    // We can directly print the string without using loops

   // cout<<str2;

  // Trick case:

  /*The moment the compiler finds the \0 character in the
  string it stops printing.*/

  // char str_example[]={'a','b','c','\0','d','e'};
  // cout<<str_example;    // abc

  // Declaration of strings

  // string str3="Animesh";
  // cout<<str3;

  // Indexing
  // cout<<str3[3];

  // Taking input

  //string s;
  //cin>>s; // only if the given string has no spaces
  // cout<<s;

  /* Issue: Anything after the space is not taken as
    input.*/

  // Solution to the problem : getline

  // string s1;
  // getline(cin,s1);
  // cout<<s1;

  /*Input a string of length n and count all vowels*/

  // string ques_1;
  // getline(cin,ques_1);
  // int count=0;
  // for(int i=0;ques_1[i]!='\0';i++){
  //   if(ques_1[i]=='a'||ques_1[i]=='A'||ques_1[i]=='e'||ques_1[i]=='E'||ques_1[i]=='i'||ques_1[i]=='I'||ques_1[i]=='o'||ques_1[i]=='O'||ques_1[i]=='u'||ques_1[i]=='U'){
  //     count++;
  //   }
  // }
  // cout<<count;

  
  

 return 0;
}