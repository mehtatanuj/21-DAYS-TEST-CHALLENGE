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
    int n,k;
    cin>>n>>k;
    string  s;
    cin>>s;
    int count=0;
    int flag=1;
  	   for(int i=0;i<n-k;i++){
            if((s[i]=='0'||s[i]=='1')&&s[i+k]=='.'){
                if(s[i]=='0')s[i+k]='1';
                else s[i+k]='0';
                flag=0;
                break;
            }
            else if((s[i+k]=='0'||s[i+k]=='1')&&s[i]=='.'){
                if(s[i+k]=='1')s[i]='0';
                else s[i]='1';
                flag=0;
                break;
            }
            else if(s[i]=='.'&&s[i+k]=='.'){
                flag=0;
                s[i]='1';
                s[i+k]='0';
                break;
            }
            else if(s[i]!=s[i+k]){
                flag=0;
                break;
            }
 
    }
    if(flag)cout<<"No"<<endl;
    else {
        for(int i=0;i<n;i++){
            if(s[i]=='.')s[i]='0';
        }
        cout<<s<<endl;
    }	
 
}
