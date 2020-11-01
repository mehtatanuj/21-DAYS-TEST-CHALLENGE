#include<bits/stdc++.h>
#define ll  long long int
#define fr(i,n) for(ll i=0; i<n; i++)
#define fre(i,n) for(ll i=1; i<=n; i++)
#define pb push_back
#define mp(i,j) make_pair(i,j)
#define fi first
#define se second
#define pii pair<ll,ll>
#define ve vector
#define piii pair<pii, ll>
#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
 
ll power(ll x, ll n, ll m)
{
    if(n==0)
        return 1;
    if(n==1)
        return x;
    x%=m;
    if(n%2)
        return (x*(power((x*x)%m, n/2, m)%m))%m;
    return power((x*x)%m, n/2, m)%m;
}
 
int main(){
  
    FAST;
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int A[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>A[i];
		}
		
		if(n==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			int flag=0;
			for(int i=0;i<n-1;i++)
			{
				if((abs(A[i]-A[i+1])>1))
				{
					flag=1;
					cout<<"NO"<<endl;
				}
				
			}
			if(flag==0)
			{
				cout<<"YES"<<endl;
			}
		}
	}
    
    
}
