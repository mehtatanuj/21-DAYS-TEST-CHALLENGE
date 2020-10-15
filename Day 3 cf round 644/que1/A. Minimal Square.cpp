#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
			if(a==b)
			{
				cout<<4*a*a<<endl;
			}
			else if(a>b)
			{
				if((2*b)<a)
				{
					cout<<a*a<<endl;
				}
				else
				{
					cout<<4*b*b<<endl;
				}
			}
			else
			{
				if((2*a)<b)
				{
					cout<<b*b<<endl;
				}
				else
				{
					cout<<4*a*a<<endl;
				}
			}
	}	


return 0;
}

