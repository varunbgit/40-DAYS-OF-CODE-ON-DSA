#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  string str[]={"Apple ","Denmark","India","Boy"};
  int n=4;
  
  sort(str,str+4);
  
  for(auto a:str)
  {
    cout<<a<<",";
  }
  return 0;
}
