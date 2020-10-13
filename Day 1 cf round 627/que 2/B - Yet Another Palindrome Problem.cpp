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
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];	
	 } 	
	 for(int i=0;i<n-2;i++)
	 {
	 	for(int j=i+2;j<n;j++)
	 	{
	 		if(A[i]==A[j])
	 		{
	 			flag=1;
	 			cout<<"YES"<<endl;
	 			break;
			 }
			 
		 }
		 if(flag==1)
		 {
		 	break;
		 }
	 }
	 if(flag==0)
	 {
	 	cout<<"NO"<<endl;
	 }
}   
 
	return 0;	
}
