#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		int n,m;
		cin>>n>>m;
			int A[n];
			int B[m];
			for(int i=0;i<n;i++)
			{
				cin>>A[i];
			}
			int X[n];
			memset(X,0,sizeof(X));
			for(int j=0;j<m;j++)
			{
			cin>>B[j];
			X[B[j]-1]=1;	
			}
			bool qq=true;
			while(qq)
			{
				qq=false;
				for(int i=0;i<n-1;i++)
				{
					if(X[i] && A[i]>A[i+1])
					{
						qq=true;
						swap(A[i],A[i+1]);
					}
				}
				if(qq==false)
				{
					break;
				}
				
			}
				int flag=0;
				for(int i=0;i<n-1;i++)
				{
					if(A[i]>A[i+1])
					{
						flag=1;
						cout<<"YES"<<endl;
						break;
					}
					
				}
				if(flag==0)
				{
					cout<<"NO"<<endl;
				}
			
		
	}
	
	
	
}
