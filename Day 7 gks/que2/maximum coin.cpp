#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	for(int q=1;q<=t;q++)
	{
		cout<<"Case #"<<q<<": ";
		string s;
		cin>>s;
		int count=0;
		for(lli i=0;i<s.length()-3;i++)
		{
			if((s[i]=='K') && (s[i+1]=='I') && (s[i+2]=='C') && (s[i+3]=='K'))
			{
				i+=3;
				for(lli j=i+1;j<s.length()-4;j++)
				{
					if((s[j]=='S') && (s[j+1]=='T') && (s[j+2]=='A') && (s[j+3]=='R') && (s[j+4]=='T'))
					{
						count++;
						j+=4;
					}
				}
			}
		}
		cout<<count<<endl;
		
	}
	
	
	return 0;
}	
