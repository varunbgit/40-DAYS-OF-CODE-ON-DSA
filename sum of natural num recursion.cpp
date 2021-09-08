//sum of natural number using recursion

#include<iostream>
using namespace std;

int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	else 
	{
		return n+sum(n-1);
	}
}
int main()
{
	int a;
	cout<<"enter number till where you want the sum";
	cin>>a;
	cout<<"sum of natural numbers is "<<sum(a);
	
}
