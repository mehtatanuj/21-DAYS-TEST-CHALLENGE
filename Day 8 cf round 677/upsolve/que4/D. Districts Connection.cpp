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
		int A[n];
		
		int flag=0;
		int z=0;
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
		}
		int mini=A[0];
		for(int i=0;i<n;i++)
		{
			if(A[i]!=mini)
			{
				flag=1;
				z=i;
				break;	
			}
		}
		
		if(flag!=0)
		{
			cout<<"YES"<<endl;
			for(int i=1;i<n;i++)
			{
				if(A[i]!=mini)
				{
						cout<<"1 "<<i+1<<endl;
				}
				else
				{
					cout<<z+1<<" "<<i+1<<endl;
						
				}	
			}		
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
	}
	
return 0;	
}
