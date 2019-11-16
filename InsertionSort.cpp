/*
INSERTION SORT
MADE BY:YOGESH KUMAR
*/
#include<iostream>
using namespace std;

int main()
{
	int a[100],i,n,j,max=-112121,loc=-1;
	cout<<"Enter Size of Array:";
	cin>>n;
	cout<<"Enter Elements:\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	
	for(i=1;i<n;i++)
	{
		j=i;
		while(j>=0 && a[j]<a[j-1])
		{
			swap(a[j],a[j-1]);
			j--;
		}
		
	}
	cout<<"Sorted Data:\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
