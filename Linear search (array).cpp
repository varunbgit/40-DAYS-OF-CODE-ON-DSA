#include<iostream>
using namespace std;

int main()
{
	int a[100];
	
	cout<<"enter no of values";
	int n;
  cin>>n;
  cout<<"enter the values";
	for(int i =0;i<n;i++)
	{
		cin>>a[i];
	}
	int key,i;
	cout<<"enter the value u want to search";
	cin>>key;
	for( i=0;i<=n-1;i++)
	{
		if(a[i]==key)
		{
			cout<<"element found at "<<i<<" index";
			break;
		}
		
	}
  if(i==n)
  {
    cout<<"element not found";
  }
	
	return 0;
}
