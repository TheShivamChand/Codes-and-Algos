#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
ll reverse(ll n)
{
	ll rev=0;
	while(n>0)
	{
		rev=rev*10+n%10;
		n/=10;
	}
	return rev;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		a=reverse(a);
		b=reverse(b);
		a=a+b;
		a=reverse(a);
		cout<<a<<"\n";
	}
}
