#include <bits/stdc++.h>
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
		if(n%2==1)
		{
			n=n/2;
			cout<<n<<endl;
		}
		else
		{
			n=n/2;
			cout<<n-1<<endl;
		}
	}
	
	return 0;
}
