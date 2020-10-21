#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		lli n,k;
		cin>>n>>k;
		lli A[n];
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
		}
		lli z=0;
		int ans=0;
		for(int i=0;i<n;i++)
		{
			if(k%2==0 && (A[i]== k/2))
			{
				ans=(z++)%2;
			}
			else if((2*A[i])<k)
			{
				ans=0;
			}
			else
			{
				ans=1;
			}
			cout<<ans<<" ";
		}
	}
	return 0;
}
