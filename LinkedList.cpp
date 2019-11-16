/*
LINKED LIST
MADE BY:YOGESH KUMAR
*/

#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};
node *s=NULL;
void push(int inp)
{
	node *p=s;
	node *n=new node;
	n->data=inp;
	n->next=NULL;
	if(p==NULL)
	{
		s=n;
	}
	else
	{
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=n;
	}
}
void Delete(int inp)
{
	node *save,*p=s;
	
	if(p==NULL)
	cout<<"UnderFlow"<<endl;
	else{
		while(p!=NULL)
		{
			if(p->data==inp)
			{
			break;	
			}
			else
			{
				save=p;
				p=p->next;
			}
		}
		save->next=save->next->next;
	}
}
void Display()
{
	node *p=s;
	cout<<"\nELEMENTS: ";
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}
void Search(int input){
	node *p=s;
	int c=-1;
	while(p!=NULL)
	{c++;
		if(p->data==input)
		{
		break;	
		}
		p=p->next;
	}
	if(c!=-1)
	cout<<"Element found at location: "<<c<<endl;
	else
	cout<<"Element not found"<<endl;
}
int main()
{
	node *s=NULL;
	int input,c;
cout<<"Operations:\n1.Insert Elements\n2.Delete Elements\n3.Display Elements\n4.Search\n";
	
	while(true){
			cout<<"Enter Option:";
			cin>>c;
			switch(c)
			{
			case 1:	cout<<"Enter Element:";
			cin>>input;
					push(input);
					break;
			case 2:cout<<"\nEnter the element:";
					cin>>input;
					Delete(input);
					break;
			case 3:	Display();
					break;
			case 4:cout<<"\nEnter the element:";
					cin>>input;
					Search(input);
					break;
			default:cout<<"Invalid Option\n";
	}
}
return 0;
}
