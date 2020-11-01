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
 int check(int A[],int n,int sum)
 {
 	
	 int dp[n+1][sum+1];
        for(int i=0; i<n+1; i++)
            dp[i][0] = 1;
        for(int i=1; i<sum+1; i++)
            dp[0][i] = 0;
        for(int i =1; i<n+1; i++)
        {
            for(int j =1; j<sum+1; j++)
            {
                if(A[i-1] <= j)
                    dp[i][j] = (dp[i-1][j-A[i-1]] + dp[i-1][j]);
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
	 int maxi=INT_MIN;
	 int sum1;
	 for(int i=0;i<=sum;i++)
	 {
	 	if(dp[n][i]>maxi)
	 	{
	 		sum1=i;
	 		maxi=dp[n][i];
		 }
	 }
	 cout<<"ans is"<<sum1<<endl;
	 return maxi;
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
				int sum=0;
 	for(int i=0;i<n;i++)
 	{
 		sum+=A[i];
	 }
				cout<<check(A,n,sum)<<endl;
	}
    
}
