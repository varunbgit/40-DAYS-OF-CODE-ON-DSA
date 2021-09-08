//algo 1 
//placing that one lement to last;
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
  array[size]=array[index];
  array[index]=key;
  size+=1;

  for(int i=0;i<size;i++)
  {
    cout<<array[i]<<"->";
  }

  return 0;
}
