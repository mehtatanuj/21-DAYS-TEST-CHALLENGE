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
		int B[n];
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>B[i];
		}
		sort(A,A+n);
		sort(B,B+n);
		int sum=0;
		for(int i=0;i<k;i++)
		{
			if(B[n-1-i]>A[i])
			{
				sum+=B[n-1-i];
			}
			else
			{
				sum+=A[i];
			}
		}
		for(int i=k;i<n;i++)
		{
			sum+=A[i];
		}
		cout<<sum<<endl;
	}
	
	
	return 0;
}
