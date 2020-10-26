#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		lli x,y,n,z;
		cin>>x>>y>>n;
		z=n-y;
		z=z/x;
		z=z*x;
		z+=y;
		cout<<z<<endl;
		
	}
	
	
	
	return 0;
}
