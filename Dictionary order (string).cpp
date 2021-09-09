#include<iostream>
#include<string>
using namespace std;

int compareString(string str1,string str2)
{
  for(int i1=0,i2=0; str1[i1]!='\0' && str2[i2]!='\0';i1++,i2++)
  {
    // cout<<"the value of i1 "<<i1<<endl;
    // cout<<"the value of i2 "<<i2<<endl;
    if(str1[i1]!=str2[i2])
    {
      if(str1[i1]<str2[i2])
    {
      return 1;
    }
    else 
    {
      return -1;
    }
    }
  }
  return 0;
}

int main()
{
  string str1,str2;
  //cin>>str1>>str2;
  str1="painter";
  str2="painting";
  cout<<compareString(str1, str2)<<endl;
}
