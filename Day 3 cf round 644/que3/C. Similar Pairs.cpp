#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
		int t;
		cin>>t;
		int count=0,count1=0;
		while(t--)
		{
			count=0;
			count1=0;
			int n;
			cin>>n;
			int A[n];
			for(int i=0;i<n;i++)
			{
				cin>>A[i];
				
			}
			int flag=0;
			sort(A,A+n);
			
			
			for(int i=0;i<n-1;i++)
			{
				if((A[i+1]-A[i])==1)
				{
					A[i]=-1;
					A[i+1]=-1;
					i++;
					flag=1;
				}
				
			}
		
			for(int i=0;i<n;i++)
			{
				if(A[i]==-1)
				{
					
				}
				else
				{
				 if(A[i]%2==0)
				{
					count++;
				}
				else
				{
					count1++;
				}
				}
			}
			if(count%2==0 && count1%2==0)
			{
				cout<<"YES"<<endl;
			}
			else if(flag==1)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
	
	return 0;
}
