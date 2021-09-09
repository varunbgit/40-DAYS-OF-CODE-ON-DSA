#include<iostream>
#include<string>
using namespace std;

int main()
{
  string str;
  str="hello world";
  
  
  for(int i=0;str[i]!='\0';i++)
  {
    if(str[i]>='a' && str[i]<= 'z')
    {
      str[i]=str[i]-'a'+'A';
    }
    else
    {
      continue;
    }
  }
  cout<<"the converted string is "<<str;
  return 0;
}
