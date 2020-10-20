#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		lli n;
		cin>>n;
		lli A[n];
		for(int i=0;i<n;i++)
		{
			cin>>A[i];	
		}	
		lli z=*max_element(A,A+n);
		int flag=0;
		if(n==2)
		{
			if(flag==0)
		{
			if(A[0]==z)
			{
				if(A[1]<z)
				{	flag=1;
					cout<<1<<endl;
					continue;
				}
				
			}
			else if(A[n-1]==z)
			{
				if(A[n-2]<z)
				{
					flag=1;
					cout<<n<<endl;
					continue;
				}
			}
		}
		if(flag==0)
		{
			cout<<"-1"<<endl;
			
		}
		}
		else
		{
			for(lli i=1;i<n-1;i++)
		{
			if(A[i]==z)
			{
				if(A[i-1]<z || A[i+1]<z)
				{
					flag=1;
					cout<<i+1<<endl;
					break;
				}
				
			}
		}
		if(flag==0)
		{
			if(A[0]==z)
			{
				if(A[1]<z)
				{	flag=1;
					cout<<1<<endl;
				}
				
			}
			else if(A[n-1]==z)
			{
				if(A[n-2]<z)
				{
					flag=1;
					cout<<n<<endl;
				}
			}
		}
		if(flag==0)
		{
			cout<<"-1"<<endl;
		}
		}
	}
	
return 0;	
}
