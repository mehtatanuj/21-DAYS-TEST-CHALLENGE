#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int A[n];
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
		}
		sort(A,A+n);
		int z=k;
		int mini=A[0];
		lli count=0;
		for(int i=1;i<n;i++)
		{
			z=k;
			z=z-A[i];
			count+=z/mini;
		}
		cout<<count<<endl;
	}
	
	
	
	return 0;
}
