#include<iostream>
#include<string>
using namespace std;
int main()
{
  string str;
  cout<<"enter a string ";
  cin>>str;
  string original_string=str;;


  for(int i=0;i<str.size()/2;i++)
  {
    char temp;
    temp=str[i];
    str[i]=str[str.size()-i-1];
    str[str.size()-i-1]=temp;
  }
  cout<<"Reversed String "<<str;
  cout<<endl;

  if(original_string == str)
  {
    cout<<"Entered String is a palindrome";
  }
  else
  {
    cout<<"string is not palindrome";
  }

  return 0;
}
