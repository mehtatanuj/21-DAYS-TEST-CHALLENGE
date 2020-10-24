#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
	 	int t;
	 	cin>>t;
	 	
		
	 	while(t--)
	 	{
	 		int n;
	 		cin>>n;
	 		int A[n][n];
	 	
			 for(int i=0;i<n;i++)
			 {
			 	for(int j=0;j<n;j++)
			 	{
			 		if(i==j)
			 		{
			 			A[i][j]=1;
					 }
					 else if(j==(i+1))
					 {
					 	A[i][j]=1;
					 }
					 else if((i==n-1) && j==0)
					 {
					 	A[i][j]=1;
					 }
					 else {
					 	A[i][j]=0;
					 }
				 }
			 }
			 for(int i=0;i<n;i++)
			 {
			 	for(int j=0;j<n;j++)
			 	{
			 		cout<<A[i][j]<<" ";
				 }
				 cout<<endl;
			 }
	 		
	 	}
	 	
	 	
	 	
}
