#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll a[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		if(k-a[0]<0)
			cout<<"0\n";
		else
			cout<<k-a[0]<<"\n";
	}
}
