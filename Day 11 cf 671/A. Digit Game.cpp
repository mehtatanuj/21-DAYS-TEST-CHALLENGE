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
		string s;
		cin>>s;
		int count=0;
		int count1=0;
		if(s.length()%2==0)
		{
			for(int i=1;i<n;i+=2)
		{
			if((s[i]-'0')%2)
			{
				count++;
			}
			else
			{
				count1++;
			}
		}
		if(count1>0)
		{
			cout<<"2"<<endl;
		}
		else
		{
			cout<<"1"<<endl;
		}
		}
		else
		{
			for(int i=0;i<n;i+=2)
		{
			if((s[i]-'0')%2)
			{
				count++;
			}
			else
			{
				count1++;
			}
		}
		if(count>0)
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<"2"<<endl;
		}
		}
		
		
		
	}
	
	return 0;
}
