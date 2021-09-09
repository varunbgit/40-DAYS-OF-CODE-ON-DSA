
#include<iostream>
using namespace std;
int main()
{
  int *array1,*array2;
  array1=new int [100];
  array2=new int [100];
  int size;
  cout<<"enter size ";
  cin>>size;
  

  for(int i=0;i<size;i++)
  {
    array1[i]=i+1;
  }

  for(int i=0;i<size;i++)
  {
    cout<<array1[i]<<"->";
  }
  cout<<endl;

  int index;
  char rotate;
  cout<<"enter index from where to rotate ";
  cin>>index;
  cout<<"enter which side to rotate ";
  cin>>rotate;

  //for left rotate
  if(rotate=='l')
  {
    for(int i=0;i<size-index;i++)
  {
    array2[i]=array1[index+i+1];
  }
  for(int i=0;i<=index;i++)
  {
    array2[size-index+i-1]=array1[i];  
  }
  }  
  
  //for right shift
  
  else if(rotate=='r')
  {
    for(int i=0;i<index;i++)
  {
    array2[i]=array1[size-index+i];
  }
  for(int i=0;i<size-index;i++)
  {
    array2[index+i]=array1[i];
  }
  }
  else
  {
    cout<<"enter correct value of rotate";
  }

  //array1=array2;
  //delete[]array1;
  //array2=NULL;

  for(int i=0;i<size;i++)
  {
    cout<<array2[i]<<"->";
  }
  return 0;
}
