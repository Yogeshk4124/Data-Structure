/*
SELECTION SORT
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
	
	for(i=0;i<n;i++)
	{
		max=-112121;
		for(j=0;j<n-i;j++)
		{
			if(max<a[j])
			{
			max=a[j];
			loc=j;
			}
		}
		swap(a[loc],a[n-i-1]);
	}
	cout<<"Sorted Data:\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
