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
    	cin>>n;
    	int A[n];
    	int count=0;
    	int count1=0;
    	for(int i=0;i<n;i++)
    	{
    		cin>>A[i];
    		if(A[i]%2)
    		{
    			count++;
			}
			else
			{
				count1++;
			}
		}
		if(count1>0 && count>0)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
		
	}
 
	return 0;	
}
