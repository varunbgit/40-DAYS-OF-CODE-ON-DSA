#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int main()
{
  //Ways to initalize a String
  string s1="hello";
  string s2={'h','e','l','l','o','\0'}; // BEWARE of \0
  cout<<s2<<endl;
  string *s3=new string("hello"); 
  string s4(s1);
  string s5("hello");
  string s6=s1;

  //want to clean a string using STL
  s1.erase();
  s2.clear();
  //check if a string is empty ot not
  cout<<s1.empty()<<endl;
  cout<<s2.empty()<<endl;
  cout<<s4.empty()<<endl;



  s1="hello";
  s2="hello";
  string str1=s1;
  string str2=s2;//update a string 
  s1=s1+" world";
  s2.append(" world");
  s1.insert(s1.length()-1, " once");
  //strcat(s2," once ");
  cout<<s1<< " and "<<s2<<endl;; 
  
  string str4="Hello world testing strings";

  // to find a substring 
  cout<<str4.find("test");//returns index at which world starts

cout<<endl;
  //how to find substring if it is present multiple times
  string str5="hello world testing strings test help us to get better";

  cout<<str5.find("test",12+1)<<endl;


  cout<<string::npos<<endl;

  //returs this value if not typecasted in integer if string not found.

  // delete certain part of string;

  s4.erase(2);//index from where we want to delete till end;
  cout<<s4<<endl;

  
  //s5.erase(index,length)
  string str9="France"; 
  str9.erase(2,2);
  cout<<str9<<endl;


//how to delete only a particular index
  string str6="hindustani";

  str6.erase(str6.begin()+ 9);
  cout<<str6<<endl;
//or
string str7="America";

//s5.erase(index,length) lenght =1 lol;

str7.erase(5,1);
cout<<str7<<endl;
    return 0;
}
