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
  	int n,k,x;
	  cin>>n>>k;
	  int A[102]={0};
	  int b[n];
	  for(int i=0;i<n;i++){
	  	cin>>x;
	  	b[i]=x;
	  	A[x]++;
	  } 
	  int count=0;
		for(int i=0;i<=101;i++)
		{
			if(A[i]!=0)
			{
				count++;
			}
		}
		int count1=0;
  	  	if(count>=k)
  	  	{
  	  		cout<<"YES"<<endl;
  	  		for(int i=0;i<n;i++)
  	  		{
  	  			if(A[b[i]]!=0)
  	  			{
  	  				cout<<i+1<<" ";
  	  				A[b[i]]=0;
  	  				count1++;
  	  				if(count1==k)
  	  				{
  	  					break;
						}
  	  				
				}
			}
			}
			else
			{
				cout<<"NO"<<endl;
			}
}