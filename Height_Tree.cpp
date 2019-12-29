/*
THIS IS PROGRAM FOR FINDING THE HEIGHT OF THE TREE
*/
#include<iostream>
using namespace std;
struct node{//CREATING NODE STRUCTURE
	int data;
	node *left=NULL,*right=NULL;
};
//DEPTH OF TREE FUNCTION
int DEPTH(node *s){
	int m=0;
	int n=0;
if(s->left==NULL&&s->right==NULL)
	return 0;
else{
	if(s->left!=NULL)
	m=DEPTH(s->left);
	if(s->right!=NULL)
	n=DEPTH(s->right);
	return 1+(m>n?m:n);
}
}

int main(){
	int no,x;
	cout<<"Enter no of elements:"<<endl;
	cin>>no;
	node *n=new node,*next,*p;
	cout<<"Enter elements:"<<endl;
	//FOR INSERTING VALUES
	for(int i=0;i<no;i++)
	{
		cin>>x;//x=ELEMENTS
		next=new node;
		next->data=x;
		next->left=NULL;
		next->right=NULL;
		
		if(i==0)
		n=next;
	else	
		{
			p=n;
			while(true)
			{
			if(x>p->data)
			{
				if(p->right==NULL)
				{
				p->right=next;
				break;
				}
				
				else
				p=p->right;
			}
			else
			{
				if(p->left==NULL){
				p->left=next;break;}
				else
				p=p->left;
			}
			}			
		}
	}
	int ans=DEPTH(n);
	cout<<"DEPTH OF TREE:"<<ans;
}
