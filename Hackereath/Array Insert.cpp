#include<iostream>
typedef long long ll;
using namespace std;
int main()
{
	ll n,q;
	cin>>n>>q;
	ll a[n];
	for(ll i=0;i<n;i++)
		cin>>a[i];
	while(q--)
	{
		ll z,x,y;
		cin>>z>>x>>y;
		if(z==1)
		{
			a[x]=y;
			continue;
		}
		if(z==2)
		{
			ll sum=0;
			for(ll i=x;i<=y;i++)
			{
				sum+=a[i];
			}
			cout<<sum<<"\n";
		}
	}
}
