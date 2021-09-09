#include<iostream>
#include<string>
using namespace std;
int main()
{
  string str;
  cout<<"enter a string ";
  str= "i m varun bansal"; 
  
  int words=1;
  for(int i=0;str[i]!='\0';i++)
  {
    if(str[i]== ' ')
    {
      words=words+1;
    }
    }
    cout<<"number of words are "<<words;
    return 0;
}
