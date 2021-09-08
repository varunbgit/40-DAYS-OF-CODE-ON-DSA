#include<iostream>
using namespace std;

double taylor(int n,float x)
{
	static double num=1;
	static double den=1;
	static double term;
	
	if(n==0)
	{
		return 1;
	}
	
	else
	{
		term=taylor(n-1,x);
		num*=x;
		den*=n;
		return term+(num/den);
	}
}
double tay(int n,float x)
{
	double t=1;
	double num=1;
	double den=1;
	for(int i=1;i<=n;i++)
	{
		num*=x;
		den*=i;
		t=t+num/den;
	}
	return t;
}
double homer(int n,float x)
{
	static double temp=1;
	
	if(n==0)
	{
		return temp;
	}
	else  
	{
		temp=1+(x/n*temp);
		return homer(n-1,x);
	}
}
int main()
{
	int a,b;
	cout<<"enter the number of terms and value of x";
	cin>>a>>b;
	cout<<"the desired result is by taylor series is (recursion)"<<taylor(a,b)<<endl;
	cout<<"the desired result is by  loop"<<tay(a,b)<<endl;
	cout<<"the desired result is by homer s rule is (recursion)"<<homer(a,b)<<endl;
	
}
