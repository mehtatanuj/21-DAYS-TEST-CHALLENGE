#include<bits/stdc++.h>
#define lli long long int
using namespace std;



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		lli n,m;
		cin>>n>>m;
		
		if(n==1)
		{
			cout<<"0"<<endl;
		}
		else if(n==2)
		{
			cout<<m<<endl;
		}
		else
		{
			cout<<2*m<<endl;
		}
		
	}
	
	
	
	return 0;
}
