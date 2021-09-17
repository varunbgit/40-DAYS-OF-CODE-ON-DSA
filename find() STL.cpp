#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
  int arr[]={1,5,2,7,9,3};
  cout<<"find the element you want to search";
  int key;
  cin>>key;
  int n=sizeof(arr)/sizeof(arr[0]);
  
  int *address =find(arr,arr+n,key); //return address
  int index=address -arr;
  cout<<index;

  return 0;

}
