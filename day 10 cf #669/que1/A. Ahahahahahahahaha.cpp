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
		vector<int>A(n);
		int count=0;
		int count1=0;
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
			if(A[i]==0)
			{
				count++;
			}
			
			else
			{
				count1++;
			}
			
		}
		if(count>=count1)
		{
			cout<<count<<endl;
			for(int i=0;i<n;i++)
			{
				if(A[i]!=1)
				{
					cout<<A[i]<<" ";
				}
			}
		}
		else
		{
			if(count1%2==0)
			{
				cout<<count1<<endl;
			}
			else
			{
				count1--;
				cout<<count1<<endl;
			}
			for(int i=0;i<count1;i++)
			{
				cout<<"1 "<<endl;	
			}
			
		}
		
		
		cout<<endl;
	}
	return 0;
}
