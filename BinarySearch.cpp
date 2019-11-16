/*
Binary Search
MADE BY:YOGESH KUMAR
*/
#include<iostream>
using namespace std;

void BinarySearch(int n,int a[],int f)
{
	int beg=0,end=n-1,loc=-1;
		int mid=(beg+end)/2;
		while(beg<=end)
	{
		if(f<a[mid])
		{
			end=mid-1;
		}
		else if(f==a[mid])
		{
			loc=mid;
			break;
		}
		else
		{
			beg=mid+1;
		}
		mid=(beg+end)/2;
	}
if(loc==-1)
	cout<<"Element not Found\n";
	else
	cout<<"Element:"<<f<<" Found at loc:"<<loc<<endl;
}

int main()
{
	int a[100],f,i,n;
	cout<<"Enter Size of Array:";
	cin>>n;
	cout<<"Enter Elements:\n";//Input Should be Sorted
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter Element to be searched:";
	cin>>f;
	BinarySearch(n,a,f);
	return 0;
}
