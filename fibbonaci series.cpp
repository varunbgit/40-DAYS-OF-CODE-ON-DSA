//fibbonaci series
#include<bits/stdc++.h>
using namespace std;

int fib(int n)

{
	
	
	if(n==0)
	{
		//cout<<"0 ";
		return 0;
		
	}
	else if(n==1)
	{
		//cout<<"1 ";
		return 1;
	}
	else
	{
		//cout<<fib(n-2)+fib(n-1)<<" ";
		return fib(n-2)+fib(n-1);
    }
}

int main()
{
	int a,f;
	cout<<"enter the number of terms     ";
	cin>>a;
	cout<<" final call  "<<fib(a)<<endl;
}
