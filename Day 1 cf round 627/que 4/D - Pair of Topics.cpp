#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
 
 
 
int main()
{
    lli n;
    cin>>n;
    lli A[n];
    lli B[n];
    for(lli i=0;i<n;i++)
    {
    	cin>>A[i];
	}
	for(lli i=0;i<n;i++)
	{
		cin>>B[i];
	}
	int C[n];
	for(int i=0;i<n;i++)
	{
		C[i]=A[i]-B[i];
	}
	sort(C,C+n);
	lli count=0;
	lli i=0;
	lli j=n-1;
	while(i<j)
	{
		if((C[i]+C[j])>0)
		{
			count+=(j-i);
			j--;
		}
		else
		{
		i++;	
			
		}		
	}
	cout<<count<<endl;
 
	return 0;	
}
