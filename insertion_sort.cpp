#include<iostream>
using namespace std;
int main()
{
	int n,l;
	
	int arr[7]={6,5,3,7,1,8,9};
	cout<<"\nbefore sorting\n";
	for(l=1;l<=7;l++)
	{
		cout<<arr[l];
	}
	
	int i,j,key;
	for(j=1;i<=7;j++)
	{ 
	   key=arr[j];
	   i=j-1;
	   while(i>=0&& arr[i]>key)
	   {
	   	arr[i+1]=arr[i];
	   	i=i-1;
	   }
	   arr[i+1]=key;
	   
		
	}
	cout<<"\nafter sorting\n";
	for(l=1;l<=7;l++)
	{
		cout<<arr[l];
	}
}
