//ncr permutaions fromula

#include<iostream>
using namespace std;


int ncr(int n,int r)
{
	if(n<0||r<0||n<r)
	{
		return -1;
		
	}
	else
	{
		if(n==r)
		{
			r=0;
			
		}
		if(r==0)
		{
			
			return 1;
		}
		else if(r==1)
		{
			return n;
		}
		else 
		{
			return ncr(n-1,r-1)+ncr(n-1,r);
		}
	}
}
int main()
{
	int a,b;
	cout<<"enter the value of n and r";
	cin>>a>>b;
	cout<<"the desired result is   "<<ncr(a,b);
}
