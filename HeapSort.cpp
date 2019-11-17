/*
HEAPSORT
MADE BY:YOGESH KUMAR
*/
#include<iostream>
using namespace std;

void heapify(int i,int heap[],int n)
{
	int largest=i;
	int right=2*i+1;
	int left=2*i;
	
	if(left<=n && heap[i]<heap[left])
	largest=left;
	if(right<=n && heap[largest]<heap[right])
	largest=right;
	if(largest!=i)
	{
		swap(heap[i],heap[largest]);	
		heapify(largest,heap,n);
	}
}
int main(){
	int heap[100];
	int n,inp;
	cout<<"Enter Heap size:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"Enter Element:";
		cin>>inp;
		heap[i]=inp;
		int par=i/2,ptr=i;
	while(i>0 && heap[par]<heap[ptr])
	{
		swap(heap[par],heap[ptr]);
		ptr=par;
		par=ptr/2;
	}
	}
	cout<<"Heap Elements:";
	for(int i=1;i<=n;i++)
	cout<<heap[i]<<" ";
	cout<<endl;
	for(int i=n;i>=2;i--)
	{
	swap(heap[1],heap[i]);
	heapify(1,heap,i-1);
	}
	cout<<"Sorted Data: ";	
	for(int i=1;i<=n;i++)
	cout<<heap[i]<<" ";
	return 0;
}
