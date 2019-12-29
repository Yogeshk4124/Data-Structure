#include<iostream>
using namespace std;

bool checker(int b[][9],int value,int r,int c)
{
	int i,j;
	for(i=0;i<9;i++)
	{
		if(b[r][i]==value)
		return false;
		if(b[i][c]==value)
		return false;
	}
	
	for(i=r-(r%3);i<=r-(r%3)+2;i++)
	{
		for(j=c-(c%3);j<=c-(c%3)+2;j++)
		{
			if(b[i][j]==value)
			{
			return false;
			}
		}
	}
	return true;
}
bool isEmpty(int b[][9],int &r,int &c)
{
	for(r=0;r<9;r++)
	{
	for(c=0;c<9;c++)
	{
		if(b[r][c]==0)
		return true;
		}	
	}
	return false;
}
bool solve(int b[][9])
{
	int r,c;
	if(!isEmpty(b,r,c))
	return true;
	
	for(int i=1;i<=9;i++)
	{
		if(checker(b,i,r,c))
		{
			b[r][c]=i;
			if(solve(b))
			{
				return true;
			}
			b[r][c]=0;
		}
	}
	return false;
}

int main()
{
   int board[9][9]={{4, 3, 0, 7, 0, 9, 5, 0, 0}, 
					{7, 0, 0, 0, 0, 2, 0, 0, 1}, 
					{0, 0, 8, 6, 5, 0, 0, 0, 2}, 
					{3, 0, 0, 0, 4, 0, 8, 0, 5}, 
					{0, 0, 1, 0, 0, 0, 2, 0, 0}, 
					{8, 0, 7, 0, 6, 0, 0, 0, 9}, 
					{2, 0, 0, 0, 9, 5, 6, 0, 0}, 
					{1, 0, 0, 4, 0, 0, 0, 0, 7}, 
					{0, 0, 3, 1, 0, 7, 0, 2, 4}}; 
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		cout<<board[i][j]<<" ";
		cout<<endl;
	}
	cout<<"\n\n\n\n\nSolution:\n";
	solve(board);
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		cout<<board[i][j]<<" ";
		cout<<endl;
	}
}
