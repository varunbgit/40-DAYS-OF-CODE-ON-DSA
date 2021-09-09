//atleast onr lower case one upper case one numberical and one special character
#include<iostream>
#include<string>
using namespace std;
int main()
{
  string str;
  cout<<"enter a password ";
  cin>>str;
int lower=0;
int upper=0;
int special=0;
int num=0;
  for(int i=0;i<str.size();i++)
  {
    if(str[i]>='a'&& str[i]<='z')
    lower++;

    else if(str[i]>='A' && str[i]<='Z')
    upper++;
    
    else if(str[i]>='0' && str[i]<='9')
    num++;

    else
    special++;
  }
  //cout<<"num "<<num<<" upper "<<upper<<" lower "<<lower<<" special "<<special<<endl;

  if(num>0 && lower>0 && upper>0 && special>0)
    cout<<"Password accepted";
  
  else
  cout<<"Invalid Password";

  return 0;
}
