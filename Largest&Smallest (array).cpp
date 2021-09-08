//finding smallest and largest element in array
#include<iostream>
#include<climits>
using namespace std;

int main()
{
		int a[5];
	
	cout<<"enter 5 values";
	
	for(int i =0;i<5;i++)
	{
		cin>>a[i];
	}
	
	int large=INT_MIN;
	int small=INT_MAX;
	
	for(int i =0;i<5;i++)
	{
		if(a[i]>large)
		{
			large=a[i];
		}
		if(a[i]<small)
		{
			small=a[i];
		}
		
	}
	
	cout<<"the largest element is "<<large<<endl;
	cout<<"the smallest element is "<<small<<endl;
	
	return 0;
}

