//Taylor series

#include<iostream>
using namespace std;

float taylor(int n,float x)
{float t;
	if(n==1)
	{
	 //   cout<<"1   ";
		return 1;
	}
	
	/*else if(n==2)
	{
		cout<<x<<"  ";
		return x;
		
	}*/
/*	else
	{
		t=taylor(n-1,x);
		cout<<t+ x/(n-1)*t<<" ";
		return t+ x/(n-1)*(t-taylor(n-2,x));
	}*/
	
	else 
	{
		return  x/(n-1)*taylor(n-1,x);
	}
}

int main()
{
	int a;
	float b;
	cout<<"enter the number of terms and value of X ";
	cin>>a>>b;
	cout<<"the desired result is   "<<taylor(a,b);
}
