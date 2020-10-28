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
    string s;
    cin>>s;
    int k;
    cin>>k;
    int flag=0;
    for(int i=0;i<s.length();i++)
    {
    	if(s[i]=='9')
    	{
    		cout<<s[i];
		}
		else if(k==0)
		{
			flag=1;
			cout<<s[i];
		}
		else if(flag!=1)
		{
			cout<<"9";
			k--;
		}
	}
	
    
    
}
