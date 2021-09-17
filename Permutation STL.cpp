#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  //int arr[]= {1,2,3};
  int arr[]={5,6,4};
  do
  {
    for(auto a:arr)
    {
      cout<<a;
    }
    cout<<endl;
  }
  while(next_permutation(arr,arr+3));
  cout<<endl<<endl<<endl;

  //to get all the outputs

  int arr1[]={5,6,4};
  sort(arr1,arr1+3);
  do
  {
    for(auto a:arr1)
    {
      cout<<a;
    }
    cout<<endl;
  }
  while(next_permutation(arr1,arr1+3));



  //previous premutation
cout<<endl<<endl<<"previous permutation:"<<endl;

  int arr2[]={3,2,1};
  do
  {
    for(auto a:arr2)
    {
      cout<<a<<",";
    }
    cout<<endl;
  }while(prev_permutation(arr2,arr2+3));

  return 0;
}

