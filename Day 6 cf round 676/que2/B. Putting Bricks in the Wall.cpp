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
		char A[n][n];
		int count0=0;
		int count1=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>A[i][j];
				
			}
		}
		
		if(A[0][1]=='1' && A[1][0]=='1')
		{
			int count=0;
		int flag=0;
		int flag1=0;
			if(A[n-1][n-2]=='1')
			{
				flag=1;
				count++;
			}
			if(A[n-2][n-1]=='1')
			{
				flag1=1;
				count++;
			}
			cout<<count<<endl;
			if(flag==1)
			{
				cout<<n<<" "<<n-1<<endl;
			}
			if(flag1==1)
			{
				cout<<n-1<<" "<<n<<endl;
			}
		}
		else if(A[0][1]=='0' && A[1][0]=='0')
		{
			int count=0;
		int flag=0;
		int flag1=0;
			if(A[n-1][n-2]=='0')
			{
				flag=1;
				count++;
			}
			if(A[n-2][n-1]=='0')
			{
				flag1=1;
				count++;
			}
			cout<<count<<endl;
			if(flag==1)
			{
				cout<<n<<" "<<n-1<<endl;
			}
			if(flag1==1)
			{
				cout<<n-1<<" "<<n<<endl;
			}
		}
		else if(A[0][1]=='0' && A[1][0]=='1')
		{
		
			if(A[n-1][n-2]=='0' && A[n-2][n-1]=='0')
			{
				cout<<1<<endl;
				cout<<1<<" "<<2<<endl;
			}
			else if(A[n-1][n-2]=='1' && A[n-2][n-1]=='1')
			{
				cout<<1<<endl;
				cout<<2<<" "<<1<<endl;
			}
			else if(A[n-1][n-2]=='0' && A[n-2][n-1]=='1')
			{
				cout<<2<<endl;
				cout<<1<<" "<<2<<endl;
				cout<<n-1<<" "<<n<<endl;
			}
			else
			{
				cout<<2<<endl;
				cout<<1<<" "<<2<<endl;
				cout<<n<<" "<<n-1<<endl;
			}
			
	}
	else if(A[0][1]=='1' && A[1][0]=='0')
		{
		
			if(A[n-1][n-2]=='0' && A[n-2][n-1]=='0')
			{
				cout<<1<<endl;
				cout<<2<<" "<<1<<endl;
			}
			else if(A[n-1][n-2]=='1' && A[n-2][n-1]=='1')
			{
				cout<<1<<endl;
				cout<<1<<" "<<2<<endl;
			}
			else if(A[n-1][n-2]=='0' && A[n-2][n-1]=='1')
			{
				cout<<2<<endl;
				cout<<1<<" "<<2<<endl;
				cout<<n<<" "<<n-1<<endl;
			}
			else
			{
				cout<<2<<endl;
				cout<<1<<" "<<2<<endl;
				cout<<n<<" "<<n-1<<endl;
			}
			
	}
	
	}
	
	
return 0;	
}
