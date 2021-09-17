#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int arr1[]={1,2,3,4,5,6,7};
  int n=sizeof(arr1)/sizeof(arr1[0]);
  
  rotate(arr1,arr1 +2,arr1 +n);//RIGHT Rotation
  
  for(auto a:arr1)
  {
    cout<<a<<",";
  }
  
  cout<<endl;

  //left rotate
  int arr2[]={1,2,3,4,5,6,7};
  rotate(arr2, arr2 +n-2, arr2 +n);
  
  for(auto a:arr2)
  {
    cout<<a<<",";
  }
  cout<<endl;
  
  //or we can also 
  int arr3[]={1,2,3,4,5,6,7};
  rotate (arr3,arr3 +5,arr3 +n);
  
  for(auto a:arr3)
  {
    cout<<a<<",";
  }


  return 0;
}
