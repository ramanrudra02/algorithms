#include<iostream>
using namespace std;

void merge(int arr[],int l,int m,int r)
{
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	
	for(i=0;i<n1;i++)
	{
		L[i]=arr[l+i];
	}
	for(j=0;j<n2;j++)
	{
		R[j]=arr[m+1+j];
	}
	
	i=0;
	j=0;
	k=l;
	while (i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];
			i++;
			
		}
		else
		{
			arr[k]=R[j];
			j++;
		}
		k++;
		
	}
	
	
	while(i<n1)
	{
		arr[k]=L[i];
		i++;
		k++;
	}
	while (j<n2)
	{
		arr[k]=R[j];
		j++;
		k++;
	}
	
}

void merge_sort(int arr[],int l,int r)
{ if (l<r)
{

	int m=(r+l)/2;
	merge_sort(arr,l,m);
	merge_sort(arr,m+1,r);
	merge(arr,l,m,r);
}
}
int main()
{
	int i,n,j,k;
	cout<<"enter the size of the array\n";
	
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
cout<<"\nBefore  merge sorting \n";

for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
		
	}
	
merge_sort(arr,0,n-1);

cout<<"\nafter merge sorting \n";
for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
		
	}
	
		cout<<endl;
}

