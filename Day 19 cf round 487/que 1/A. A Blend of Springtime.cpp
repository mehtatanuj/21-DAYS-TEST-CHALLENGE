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
	int count=0;
	int flag=0,flag1=0,flag2=0,flag3=0;
	if(s.length()<3)
	{
		cout<<"NO"<<endl;
		
	}
	else
	{
			for(int i=0;i<s.length()-2;i++)
	{
		
	if((s[i]=='B') && (s[i+1]=='A') && (s[i+2]=='C'))
	{
		flag=1;
		cout<<"YES"<<endl;
		break;
	}
	else if((s[i]=='B') && (s[i+1]=='C') && (s[i+2]=='A'))
	{
		flag=1;
		cout<<"YES"<<endl;
		break;
	}
	else if((s[i]=='A') && (s[i+1]=='B') && (s[i+2]=='C'))
	{
		flag=1;
		cout<<"YES"<<endl;
		break;
	}
	else if((s[i]=='A') && (s[i+1]=='C') && (s[i+2]=='B'))
	{
		flag=1;
		cout<<"YES"<<endl;
		break;
	}
	else if((s[i]=='C') && (s[i+1]=='A') && (s[i+2]=='B'))
	{
		flag=1;
		cout<<"YES"<<endl;
		break;
	}
	else if((s[i]=='C') && (s[i+1]=='B') && (s[i+2]=='A'))
	{
		flag=1;
		cout<<"YES"<<endl;
		break;
	}
	else
	{
		
	}
		
	
}
if(flag==0)
{
	cout<<"NO"<<endl;
}
	}

 return 0;   	
}
