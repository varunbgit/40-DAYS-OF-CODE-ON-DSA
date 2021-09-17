//sort elements on basis of sum of digits.
#include<iostream>
#include<algorithm>
using namespace std;

int sum(int n)
{
    int s=0;
    while(n>0)
    {
      s=s+n%10;
      n/=10;
    }
    return s;
}

int selfmadesort(int n1,int n2)
{
  return sum(n1)<sum(n2);
}
int main()
{
  int arr[]={4,3,6,8,1,40,20};
  int n=sizeof(arr)/sizeof(arr[0]);
  sort(arr,arr+n,selfmadesort); 
  for(auto a:arr)
  {
    cout<<a<<",";
  }
  return 0;
}
