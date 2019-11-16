/*
MERGE SORT
MADE BY:YOGESH KUMAR
*/
#include<iostream>
using namespace std;

void merge(int *a,int s,int e)
{
	int mid=(s+e)/2;
	int k=s,i=s,j=mid+1;
	int temp[100];
	
	while(i<=mid && j<=e)
	{
		if(a[i]<a[j])
		{
			temp[k++]=a[i++];
		}
		else
		{
			temp[k++]=a[j++];
		}
	}
	while(i<=mid)
	{
		temp[k++]=a[i++];
	}
	while(j<=e)
	{
		temp[k++]=a[j++];
	}
	
	for(int k=s;k<=e;k++)
	{
		a[k]=temp[k];
	}
}
void mergeSort(int *a,int s,int e)
{
	if(s>=e)
	return;
	int mid=(s+e)/2;
	mergeSort(a,s,mid);
	mergeSort(a,mid+1,e);
	merge(a,s,e);
}

int main()
{
	int a[100],n,i;
	cout<<"Enter Size of Array:";
	cin>>n;
	cout<<"Enter Elements:\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	mergeSort(a,0,n-1);
	cout<<"Sorted Data: ";
	
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
return 0;
}
