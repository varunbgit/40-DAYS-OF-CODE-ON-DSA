//fibbonaci series
#include<bits/stdc++.h>
using namespace std;


int val[100];

int  fib(int n)
{
	
	
	if(n<=1)
	{
		
		return n;
		
	}
	
		else
	{
		if(val[n-2]==-1)
		{
			return fib(n-2);
		}
		if(val[n-1]==-1)
		{
			return fib(n-1);
			
		}
		val[n]=val[n-1]+val[n-2];
		return val[n];
	
	
    }
}

int main()
{
	int a;
	for (int i=0;i<100;i++)
	{
		val[i]=-1;
	}
	cout<<"enter the number of terms     ";
	cin>>a;
	cout<<"  "<<fib(a)<<endl;
}
