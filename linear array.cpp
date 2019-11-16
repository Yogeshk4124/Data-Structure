/*
MADE BY:YOGESH KUMAR
Write a menu Driven program that implement following on a linear arrar:
1.Insert a new Element
2.Delete an element from a given position
3.To display the elements of the linear array
*/
#include<iostream>
using namespace std;

int main(){
	int a[100],c,d,p=-1;
	char n;
	cout<<"Operations:\n1.Insert Elements\n2.Delete Elements\n3.Display Elements\n";
	
	while(true){
			cout<<"Enter Option:";
			cin>>c;
			switch(c)
			{
			case 1://Insert
            cout<<"\nEnter element:\n";
				    cin>>a[++p];
					  break;
			case 2://Delete
          cout<<"\nEnter the position of element:";
					cin>>d;
					if(d>p)
					cout<<"Position Doesn't Exist\n";
					else
					for(int i=d;i<p;i++)
					{
						a[i]=a[i+1];
					}
					p--;
					break;
			case 3://Display 
          cout<<"\nElements:";
					for(int i=0;i<=p;i++)
					cout<<a[i]<<" ";
					cout<<endl;
					break;
			default:"Invalid Option\n";
			
	}
cout<<"Want to Continue(y/n):";
cin>>n;
if(n!='y')
break;
}
}
