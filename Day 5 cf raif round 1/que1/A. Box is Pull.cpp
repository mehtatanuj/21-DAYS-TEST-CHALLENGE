#include<bits/stdc++.h>
#define lli long long int
using namespace std;


int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		lli x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		if(x1==x2)
		{
			cout<<abs(y2-y1)<<endl;
		}
		else if(y1==y2)
		{
			cout<<abs(x2-x1)<<endl;
		}
		else
		{
			lli z=abs(x2-x1)+abs(y2-y1)+2;
			cout<<z<<endl;
		}
	}
	
	return 0;
}

