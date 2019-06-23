#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n],sum=0;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		cout<<sum-n+1<<"\n";
	}
}
