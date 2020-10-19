#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	for(int q=1;q<=t;q++)
	{
		cout<<"Case #"<<q<<": ";
		lli n;
		cin>>n;
		lli A[n][n];
		for(lli i=0;i<n;i++)
		{
			for(lli j=0;j<n;j++)
			{
				cin>>A[i][j];
			}
		}
		lli dp[n];
		lli dp1[n];
		memset(dp,0,sizeof(dp));
		memset(dp1,0,sizeof(dp1));
		for(lli i=0;i<n;i++)
		{
			for(lli j=0;j<n;j++)
			{
				if(i>=j)
				{
					dp[i-j]+=A[i][j];
				}
				
			}
				
		}
		for(lli i=0;i<n;i++)
		{
			for(lli j=0;j<n;j++)
			{
				if(j>i)
				{
					dp1[j-i]+=A[i][j];
				}
			}
		}
		lli z=*max_element(dp,dp+n);
		lli y=*max_element(dp1,dp1+n);
		
		lli ans=0;
		ans=max(z,y);
		cout<<ans<<endl;
		
	}
	
	
	return 0;
}
