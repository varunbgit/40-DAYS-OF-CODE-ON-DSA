//algo 2
//continuoes shifting
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
  
  int key,index;
  cout<<"enter the index where you want to insert";
  cin>>index;
  cout<<"enter the value";
  cin>>key;
  
  for(int i=size;i>index;i--)
  {
    array[i]=array[i-1];
  }
  array[index]=key;
  size+=1;
  
  for(int i=0;i<size;i++)
  {
    cout<<array[i]<<"->";
  }
  return 0;
}
