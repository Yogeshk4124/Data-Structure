/*
Linear Search
MADE BY:YOGESH KUMAR
*/
#include<iostream>
using namespace std;

int main()
{
	int a[100],f,i,loc=-1,n;
	cout<<"Enter Size of Array:";
	cin>>n;
	cout<<"Enter Elements:\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter Element to be searched:";
	cin>>f;
	for(i=0;i<n;i++)
		if(f==a[i])
	{
		loc=i;
		break;
	}
	if(loc==-1)
	cout<<"Element not Found\n";
	else
	cout<<"Element:"<<f<<" Found at loc:"<<loc<<endl;
	return 0;
}
