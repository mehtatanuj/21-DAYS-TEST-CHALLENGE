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
		int q=s[0]-'0';
		q=q-1;
		q=10*q;
		if(s.length()==1)
		{
			q+=1;
		}
		else if(s.length()==2)
		{
			q+=3;
		}
		else if(s.length()==3)
		{
			q+=6;
		}
		else
		{
			q+=10;
		}
		cout<<q<<endl;
	}
	
	
return 0;	
}
