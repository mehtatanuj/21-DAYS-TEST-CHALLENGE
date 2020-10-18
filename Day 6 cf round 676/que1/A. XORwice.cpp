#include<bits/stdc++.h>
#define lli long long int
using namespace std;

lli check(lli a, lli b) 
{ 
    lli j = 0, x = 0; 
  
    
    while (a || b) { 
  
         
        if ((a & 1) && (b & 1)) { 
  
             
            x += (1 << j); 
        } 
  
        
        a >>= 1; 
        b >>= 1; 
        j += 1; 
    } 
    return x; 
}
int main()
{
	
int t;
cin>>t;
while(t--)
{
lli a,b;
cin>>a>>b;
lli z=check(a,b);
cout<<(a^z)+(b^z)<<endl;
}	
	
return 0;	
}
