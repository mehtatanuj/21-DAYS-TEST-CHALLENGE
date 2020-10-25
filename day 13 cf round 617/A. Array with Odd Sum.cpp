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
		int n;
		int flag=0;
		int flag1=0;
		cin>>n;
		int A[n];
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
			if(A[i]%2)
			{
				flag1=1;
			}
			else
			{
				flag=1;
			}
		}
		if(n%2==0)
		{
			if(flag==1 && flag1==1)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		else
		{
			if(flag1==0)
			{
				cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl;
			}
		
		}
		
	}
 
 
	return 0;
}

