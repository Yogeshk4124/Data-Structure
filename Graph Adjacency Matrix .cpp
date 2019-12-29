/*
This program implements the following things:
1.How to make graph using Adjacency Matrix.
2.Depth First Search(DFS) using Stack and recursively methods
3.Breadth First Search(BFS) using Queue and recursively methods
*/
#include<iostream>
#include<vector>
using namespace std;
class graph
{
	int arr[100][100],n,f,s,q;
	vector<int>v{100,NULL};         //Used to keep visited nodes 
	vector<int>Q,S;                 //Queue for BFS,Stack for DFS
	public:
		void create(int N)
		{
			n=N;
			cout<<"Enter no of query:";cin>>q;
			while(q-- >0){
			cout<<"Enter the node and the connected node:";
			cin>>f>>s;
			arr[f][s]=1;
			arr[s][f]=1;
			}
			cout<<"The Adjacency Matrix is:"<<endl;
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++)cout<<arr[i][j]<<" ";
				cout<<endl;
			}
		}
		void DFS(int s){
			cout<<s<<" ";
			v[s]=1;
			for(int i=0;i<n;i++)
			if(arr[s][i]==1 && v[i]==0)
			DFS(i);
			return;
		}
		void dfsStack(int s){
			v.assign(n,0);
			S.push_back(s);
			v[s]=1;
			while(!S.empty()){
			s=S.back();
			cout<<s<<" ";
			S.pop_back();
			for(int i=n-1;i>=0;i--)			    //You can take i from 0 to n but you will get a different
			if(arr[s][i]==1 && v[i]==0){		//DFS as it traverse from left node first.In this case I  
		  v[i]=1; 				                //am traversing through right node first
			S.push_back(i);
			}
			}
			return;
		}
		void BFS(int s){
			v.assign(n,0);
			Q.push_back(s);
			v[s]=1;
			while(!Q.empty()){
			for(int i=0;i<n;i++)
			if(arr[s][i]==1 && v[i]==0 ){
			Q.push_back(i);
			v[i]=1;
			}
			cout<<Q.front()<<" ";
			Q.erase(Q.begin());
			s = Q.front();
			}
			v.assign(n,0);
		}
		void bfsStack(int s){
			cout<<s<<" ";
			v[s]=1;
			for(int i=0;i<n;i++)
			if(v[i]==0 && arr[s][i]==1){
			v[i]=1;
			Q.push_back(i);
			}
			s=Q.front();
			if(!Q.empty())	{
			Q.erase(Q.begin());
			bfsStack(s);
			}
		}
};
int main()
{
	int n;
	cout<<"Enter no of Nodes:";
	cin>>n;	
	graph o;
	o.create(n);
	cout<<"DFS:";
	o.DFS(0);
	cout<<"\nDFS(Stack):";
	o.dfsStack(0);
	cout<<"\nBFS:";
	o.BFS(0);
	cout<<"\nBFS(Stack):";
	o.bfsStack(0);
}
