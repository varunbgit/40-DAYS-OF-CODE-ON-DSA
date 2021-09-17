#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int selfmadesort(string s1,string s2)
{
  if(s1.length()!=s2.length())
  {
    return s1.length()>s2.length();
  }
  else
  return s1<s2;
}

int main()
{
  string str[]={"himakshi","ashwariya","varun","umang","vishal","vinayak","tiya","kashish","siddharth","divyanshi"};
  
  int n=sizeof(str)/sizeof(str[0]);
  
  sort(str,str+n,selfmadesort);
  
  for(int i=0;i<n;i++)
  {
    cout<<str[i]<<" ";
  }

}
