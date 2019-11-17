/*
POSTFIX CALCULATOR
MADE BY:YOGESH KUMAR
*/
#include<iostream>
#include<cstring>
using namespace std;

int stack[1000];
int top=-1;
int main()
{
	string s,ans;
	cout<<"Enter the Postfix Expression:";
	cin>>s;
	int l=s.length();
	for(int i=0;i<l;i++)
	{
		if(s[i]>=48 && s[i]<=57)
		{
			stack[++top]=s[i]-48;
		}
		else
		{
			if(top-1<0){
			cout<<"Not Enough operand";
			return 0;
			}
			else
			{
			int b=stack[top],a=stack[top-1];
			top=top-1;
			switch(s[i])
			{
				case '+':stack[top]=a+b;
						 break;
				case '-':stack[top]=a-b;
						 break;
				case '*':stack[top]=a*b;
						 break;
				case '/':stack[top]=a/b;
						 break;
			}
		}
	}
}
	cout<<"Solution :"<<stack[0]<<endl;
	return 0;
}
