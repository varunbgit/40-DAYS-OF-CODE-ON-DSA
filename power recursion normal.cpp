//normal approch
//calculate power using recursion

#include<iostream>
using namespace std;

int pow(int m,int n)
{
	if(n==0)
	
	{
	return 1;
	}
	
	else
	{
		return m*pow(m,n-1);
	}
}

int main()
{
	int a,b;
	cout<<"enter the number and the value of power";
	cin>>a>>b;
	
	cout<<"the desired answer is "<<pow(a,b);
	return 0; 
}
