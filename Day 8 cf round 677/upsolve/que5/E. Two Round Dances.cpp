#include<bits/stdc++.h>
#define lli long long int
using namespace std;

lli fact(lli n) 
{ 
    lli res = 1, i; 
    for (i = 2; i <= n; i++) 
        res *= i; 
    return res; 
}
lli nCr(int n, int r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
} 



int main()
{
	int n;
	cin>>n;
	cout<<(nCr(n,n/2)*(fact((n/2)-1))*(fact((n/2)-1)))/2;
	
	
return 0;	
}
