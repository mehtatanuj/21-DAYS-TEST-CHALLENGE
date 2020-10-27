#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		lli a,b;
		cin>>a>>b;
		if(a>b)
		{
		if(abs(a-b)%2==0)
		{
			cout<<"1"<<endl;	
		}
		else
		{
			cout<<"2"<<endl;
		}
		
			
		
		}
		else
		{
			if((b-a)%2==0)
			{
				cout<<"2"<<endl;
			}
			else
			{
				cout<<"1"<<endl;
			}
		}
		
		
	}
	
	
	
}
