#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int mint=INT_MAX;
		for (int i = 1; i*i<= a; i++) {
			if (a % i == 0)
			 {
				if (i <= b)
				{
					mint = min(mint, a / i);
				}

				if (a/ i <= b) {
					mint = min(mint, i);
				}
				
			}
			
		}
		cout<<mint<<endl;

		
	}
	
	
	return 0;
}
