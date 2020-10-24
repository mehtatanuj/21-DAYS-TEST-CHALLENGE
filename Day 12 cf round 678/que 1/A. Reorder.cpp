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
	 		lli x=0;
	 		for(lli i=0;i<n;i++)
	 		{
	 			cin>>A[i];
			 }
			for(int i=0;i<n;i++)
			{
				x+=A[i];
			}
			 
			 if(x==k)
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


