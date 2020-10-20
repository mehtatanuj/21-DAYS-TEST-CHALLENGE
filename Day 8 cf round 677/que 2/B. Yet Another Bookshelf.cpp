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
		int A[n];
		for(int i=0;i<n;i++)
		{	
		cin>>A[i];
		}
		int flag=0;
		int count=0;
		int maxi=0;
		for(int i=0;i<n;i++)
		{
			if(A[i]==0 && flag==1)
			{
				count++;
			}
			
			if(A[i]==1)
			{
				flag=1;
				maxi=count;
			}
		}
		cout<<maxi<<endl;
	}
	
	
return 0;	
}
