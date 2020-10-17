#include<bits/stdc++.h>
#define lli long long int
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	
		string s;
		cin>>s;
		lli count=0,count1=0;
		for(lli i=0;i<s.length();i++)
		{
			if(s[i]=='A')
			{
				count++;
			}
			else
			{
				count1++;
				if(count>0)
				{
					count--;
					count1--;
				}
				else if(count1>1)
				{
					count1=count1-2;
				}
			}
		}
		cout<<count1+count<<endl;
	}
	
	
	
	
	return 0;
}

