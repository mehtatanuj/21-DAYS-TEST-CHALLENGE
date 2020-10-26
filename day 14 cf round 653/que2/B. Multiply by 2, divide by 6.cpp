#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		lli n,count=0;
		
		cin>>n;
		if(n==1)
		{
			cout<<"0"<<endl;
		}
		else
		{
			int flag=0;
		while(1)
		{
			if(n%6==0)
			{
				count++;
				n=n/6;
			}
			else if(n%3==0)
			{
				count+=2;
				n=n*2;
				n=n/6;
			}
			else if(n==1)
			{
				break;
			}
			else
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		cout<<count<<endl;
		else
		{
			cout<<"-1"<<endl;
		}
		}
		
		
	}
	
	
	
	return 0;
}
