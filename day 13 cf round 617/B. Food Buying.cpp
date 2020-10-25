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
 		lli sum=0,y,z;
 		lli n;
 		cin>>n;
 		while(n>9)
 		{
 			z=n%10;
 			sum+=(n/10)*10;
 			 n=n/10;
 			n+=z;
		}
		sum+=n;
		cout<<sum<<endl;
	 }
 
 
	return 0;
}

