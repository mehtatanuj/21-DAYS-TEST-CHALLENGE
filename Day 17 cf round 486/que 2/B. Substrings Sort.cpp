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
 void pairsort(int a[], string b[], int n) 
{ 
    pair<int, string> pairt[n]; 
  
   
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
int isSubstring(string s1, string s2) 
{ 
    int M = s1.length(); 
    int N = s2.length(); 
  
   
    for (int i = 0; i <= N - M; i++) { 
        int j; 
  
        
        for (j = 0; j < M; j++) 
            if (s2[i + j] != s1[j]) 
                break; 
  
        if (j == M) 
            return i; 
    } 
  
    return -1; 
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
    int n;
    cin>>n;
    string s[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
		cin>>s[i];
		b[i]=s[i].length();    
	}
	pairsort(b,s,n);
	int flag=0;

	for(int i=0;i<n-1;i++)
	{
		if(isSubstring(s[i],s[i+1])==-1)
		{
			flag=1;
			cout<<"NO"<<endl;
			break;
		}
		
	}
	if(flag==0)
	{
		cout<<"YES"<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<s[i]<<endl;
			}
	}
	
    
    
}
