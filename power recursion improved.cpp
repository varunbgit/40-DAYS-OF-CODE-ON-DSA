#include<iostream>
using namespace std;

int impPow(int m,int n)
{
	if(n==0)
	{
		return 1;
		
	}
	
	else
	{
		if(n%2==0)
		{
			return impPow(m*m,n/2);
			
		}
		else if(n%2!=0)
		{
			return m*impPow(m*m,(n-1)/2);
		}
	}
}

int main()
{
	int a,b;
	cout<<"enter the number and its power ";
	cin>>a>>b;
	cout<<"the desired answer is "<<impPow(a,b);
	
	return 0;
	
}
