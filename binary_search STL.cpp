#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  //sorted array
  int arr[]={1,3,5,7,9,11,15,12,19};
  int key,n=sizeof(arr)/sizeof(arr[0]);
  cout<<"enter key";
  cin>>key;
  int a =binary_search(arr,arr+n,key);//returns true or false
  cout<<a;
}
