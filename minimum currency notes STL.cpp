#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
  int curr[]={1,2,5,10,20,50,100,200,500,2000};
  int n=sizeof(curr)/sizeof(curr[0]);
  cout<<"Enter amount";
  int key,notes=0;
  cin>>key;
  while(key>0)
  {
    int *add=upper_bound(curr,curr+n,key);
    int index=add-curr;
    key=key-curr[index-1];
    notes++;
    cout<<curr[index -1]<<" ";
  }
  cout<<endl<<"number of minimun notes = "<<notes;
  return 0;

}
