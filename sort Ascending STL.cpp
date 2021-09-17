#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int arr[]={4,3,6,8,1,40,20};
  int n=sizeof(arr)/sizeof(arr[0]);
  sort(arr,arr+n); // sort the array in ascending order
  for(auto a:arr)
  {
    cout<<a<<",";
  }
  return 0;
}
