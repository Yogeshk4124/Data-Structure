/*
THIS IS PROGRAM FOR SOLVING NQUEEN PROBLEM
MADE BY:YOGESH KUMAR
*/
#include<iostream>
using namespace std;
bool cansolve(int board[][10],int i,int j,int n)
{
	int y=j,x=0;
	while(x<i)
	{
		if(board[x][y]==1)
		return false;
		x++;
	}
	x=i;y=j;
	while(x>=0 && y<n)
	{
		if(board[x][y]==1)
		return false;
		
		x--;y++;
	}
	x=i;y=j;
	while(x>=0 && y>=0)
	{
		if(board[x][y]==1)
		return false;
		x--;y--;
	}
	return true;
}
bool nqueen(int board[][10],int n,int i)
{
	int j=0;
	if(i==n)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(board[i][j])
				cout<<"q ";
				else
				cout<<"_ ";
			}
			cout<<endl;
		}
		return true;
	}
	for(j=0;j<n;j++){
	if(cansolve(board,i,j,n))
	{
		board[i][j]=1;	
	bool jst=nqueen(board,n,i+1);
	if(jst){
		return true;
	}
	board[i][j]=0;
	}
}
return false;
}
int main()
{
	int n;
	cin>>n;
	int board[10][10]={0};
	nqueen(board,n,0);
	
}
