#include<iostream>
#include<string>
using namespace std;

int main()
{
  string str;
  //cout<<"Enter a line ";
  //cin>>str;
  str="   hello my name is Varun Bansal  ";
  //cout<<endl<<str<<endl;
  int no=1;
  for(int i=0;str[i]!='\0';i++)
  {
    if(str[i]==' ')
    { 
    if ( str[i+1]==' ')
    
    {
      continue;
    }
    else 
      no++;
    
  }
  }
  if(str[0]==' ')
  {
    no--;
  }
  if(str[str.size()-1]==' ')
  {
    no--;
  }
  cout<<"the number of words are "<<no;
    return 0;
  }
