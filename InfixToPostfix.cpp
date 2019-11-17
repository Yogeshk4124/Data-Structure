/*
INFIX TO POSTFIX
MADE BY:YOGESH KUMAR
*/
#include<iostream>
#include<cstring>
using namespace std;

char stack[100],top=-1;

int prec(char ch)
{
	switch(ch)
	{
		case '+':return 1;
		case '-':return 1;
		case '*':return 2;
		case '/':return 2;
		case '^':return 3;
		default:return 0;
	}
}
int main()
{
	string s,ans;
	cout<<"Enter the Infix Expression:";//input should not be capital letters
	cin>>s;
	stack[++top]='(';
	s="("+s+")";
	int l=s.length();
	for(int i=1;i<l;i++)
	{
		
		if(s[i]>='a' && s[i]<='z')
		{
			ans+=s[i];
		}
		else
		{
			 if(s[i]==')')
			{
				while(stack[top]!='(')
				{
					ans+=stack[top--];
				}
				top--;
			}
			else if(s[i]=='(')
				stack[++top]=s[i];
			else
			{
				
				if(prec(stack[top])<prec(s[i]))
				stack[++top]=s[i];
				else if(prec(stack[top])==prec(s[i]))
				{
				ans+=stack[top];
				stack[top]=s[i];
				}
				else
				{
					while(stack[top]!='(')
					{
						ans+=stack[top--];
					}
					stack[++top]=s[i];
				}
			}
			
		}	
	}
	cout<<"Postfix expression:";
	cout<<ans;
	return 0;
}
