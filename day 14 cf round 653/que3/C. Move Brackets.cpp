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
		for(int i=0;i<n;i++)
		{
			if(s[i]=='(')
			{
				count++;
			}
			else
			{
				if(count==0)
				{
					
				}
				else
				{
					count--;
				}
			}
		}
		cout<<count<<endl;
	}	
	
	
	
}
