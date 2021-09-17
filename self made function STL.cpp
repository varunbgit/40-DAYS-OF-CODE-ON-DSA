#include<iostream>
#include<algorithm>
using namespace std;

int selfmadesort(int n1,int n2)
{
  return n1>n2;

}

int main()
{
  int arr[]={4,3,6,8,1,40,20};
  int n=sizeof(arr)/sizeof(arr[0]);
  sort(arr,arr+n,selfmadesort); // sort the array in descending  order
  for(auto a:arr)
  {
    cout<<a<<",";
  }
  return 0;
}
