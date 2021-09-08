//reversing array 
//algo swap
//unsorted array
#include<iostream>
using namespace std;


int main()
{
  int array[100];
  int size;
  cout<<"enter size";
  cin>>size;
  for(int i=0;i<size;i++)
  {
    array[i]=i+1;
  }
   
  for(int i=0;i<size;i++)
  {
    cout<<array[i]<<"->";
  }
  cout<<endl;

  int temp,s,e;
  for(int i=0;i<size/2;i++)
  {
    temp=array[i];
    array[i]=array[size-i-1];
    array[size-i-1]=temp;


  }
  
  for(int i=0;i<size;i++)
  {
    cout<<array[i]<<"->";
  }
  
  return 0;
}
