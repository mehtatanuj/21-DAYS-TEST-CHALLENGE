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
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		sort(A,A+n);
		int mint=INT_MAX;
		for(int i=0;i<n-1;i++)
		{
			mint=min(mint,A[i+1]-A[i]);
		}
		cout<<mint<<endl;
	}
	
	return 0;
	
}
