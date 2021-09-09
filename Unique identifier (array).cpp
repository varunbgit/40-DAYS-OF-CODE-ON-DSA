#include<iostream>
using namespace std;
int unique(int arr[],int n)
{
  int answer=0;
  for(int i=0;i<n;i++)
  {
    answer = answer ^ arr[i];
  }
  if(answer==0)
  {
    return -1;
  }
  else 
  {
    return answer;
  }
}



int main()
{int a[100];
cout<<"enter number of values";
int n;
cin>>n;
cout<<"enter the values";
for(int i=0;i<n;i++)
{
  cin>>a[i];

}
cout<<"the unique value is "<<unique(a,n) ;
}
