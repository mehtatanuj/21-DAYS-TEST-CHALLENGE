#include<bits/stdc++.h>
#define lli long long int
using namespace std;


int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		lli n;
		cin>>n;
		n=n/2;
		lli sum=0;
		for(lli i=1;i<=n;i++)
		{
			sum+=8*i*i;
		}
		cout<<sum<<endl;
	}
	
	
	return 0;
}
