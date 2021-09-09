//shift only leftwards
#include<iostream>
using namespace std;
int main()
{
  int *array1,*array2;
  
  int size;
  cout<<"enter size";
  cin>>size;
  array1=new int[size];

  for(int i=0;i<size;i++)
  {
    array1[i]=i+1;
  }
  
  int index;
  cout<<"enter index";
  cin>>index;
  
  for(int i=0;i<size-index;i++)
  {
    array2[i]=array1[index+i];
  }

  delete []array1;
  array1=array2;
  array2=NULL;
  for (int i=0;i<size-index;i++)
  {
    cout<<array1[i]<<"->";
  }
  
  return 0;
}
