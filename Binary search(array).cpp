//binary search
#include<iostream>
using namespace std;

void BinarySearch(int arr[],int ele)
{
	int s=0;
	int e=4;
	while(s<=e)
	{
	   int mid = (s+e)/2;
	   if(arr[mid]==ele)
	   
	   {
	   	cout<<"element found at index "<<mid;
	    break;
      }
     
	   
	   else if(ele>arr[mid])
	   {
	   	s=mid+1;
	   }
	   
	   else if (ele<arr[mid])
	   {
	   	e=mid-1;
	   }
	   

    }
    
	
	
}

int main()

{
	
	int a[5];
	cout<<"enter 5 values in sorted form";
	for(int i =0;i<5;i++)
	{
		cin>>a[i];
	}
	int key ;
	cout<<"enter the number to find";
	cin>>key;
	BinarySearch(a,key);
}
