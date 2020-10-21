#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		lli n,k;
		cin>>n>>k;
		lli A[n];
		lli B[n];
		for(lli i=0;i<n;i++)
		{
			cin>>B[i];
		}
		for(lli i=0;i<n;i++)
		{
			A[i]=B[i];
		}
		sort(A,A+n);
		lli i=0,j=n-1;
		lli index1=0,index2=0;
		int flag=0;
		while(i<j)
		{
			if((A[i]+A[j])==k)
			{
				flag=1;
				index1=A[i];
				index2=A[j];
				break;
			}
			else if((A[i]+A[j])>k)
			{
				j--;
			}
			else
			{
				i++;
			}
		}
		if(flag==0)
		{
			for(lli i=0;i<n;i++)
			{
				cout<<"0 ";
			}
			cout<<endl;
		}
		
		
		else
		{
			memset(A,-1,sizeof(A));
			int flg=0;
			int flg1=0;
			for(lli i=0;i<n;i++)
			{
				if(B[i]==index1 && flg==0)
				{
					A[i]=0;
					flg=1;
				}
				else if(B[i]==index2 && flg1==0)
				{
					A[i]=1;
					flg1=1;
				}
			}
			
		
				int tt=(n-1)/2;
				int count=0;
				int flag1=0;
				for(lli i=0;i<n;i++)
				{
					if(count>=tt && A[i]==-1)
					{
						A[i]=1;
					}
					else if(A[i]==-1)
					{
						A[i]=0;
						count++;
					}
				}
				for(lli i=0;i<n;i++)
				{
					cout<<A[i]<<" ";
				}
			cout<<endl;
		}
	}
	return 0;
}
