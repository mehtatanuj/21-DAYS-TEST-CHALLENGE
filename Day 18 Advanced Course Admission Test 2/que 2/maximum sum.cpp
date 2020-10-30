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
    ll n;
    cin>>n;
     ll current_sum=0;
    ll max_sum;
    ll A[n];
    for(ll i=0;i<n;i++)
    {
        cin>>A[i];
     
       
    }
    max_sum=*max_element(A,A+n);
    
    
     for(ll i=0;i<n;i++)
    {
        
      current_sum+=A[i];
        max_sum=max(max_sum,current_sum);
         if(current_sum<0)
             current_sum=0;
    }
    
    
      
    cout<<max_sum<<endl;
   
  
    
    
}
