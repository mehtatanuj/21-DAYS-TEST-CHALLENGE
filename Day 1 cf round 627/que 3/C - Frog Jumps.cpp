#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
 
 
 
int main()
{
    int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int maxi=0;
		int count=1;
			for(int i=0;i<s.length();i++)
			{
				if(s[i]=='L')
				{
					count++;
					maxi=max(count,maxi);
				}
				else
				{
					count=1;
				}
			}
			
					maxi=max(count,maxi);
			if(maxi==0)
			cout<<1<<endl;
			else
			cout<<maxi<<endl;
	}
 
	return 0;	
}
