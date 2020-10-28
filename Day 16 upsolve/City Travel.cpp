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
void pairsort(int a[], int b[], int n) 
{ 
    pair<int, int> pairt[n]; 
  
   
    for (int i = 0; i < n; i++)  
    { 
        pairt[i].first = a[i]; 
        pairt[i].second = b[i]; 
    } 
  
    
    sort(pairt, pairt + n); 
      
    
    for (int i = 0; i < n; i++)  
    { 
        a[i] = pairt[i].first; 
        b[i] = pairt[i].second; 
    } 
} 
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
    ll sum,daily,q;
    
    cin>>sum>>daily>>q;
    int a[q];
    int b[q];
     
     
     for(int i=0;i<q;i++)
     {
     	cin>>a[i];
     	cin>>b[i];
	 }
	 pairsort(a, b, q);
	 ll count=1;
	 int qqq=0;
	 while(sum>0)
	 {
	 	
	 	if(count==a[qqq])
	 	{
	 		sum-=b[qqq];
	 		qqq++;
		 }
		 else
		 {
		 	
		 	sum-=daily;
		 }
		 count++;
	  }
	  cout<<count-1<<endl; 
    
    
}
