#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll s,x,n,sum=0,days=0,j=0;
	cin>>s>>x>>n;
	vector<pair<ll ,ll> > v(n);
	for(int i=0;i<n;i++)
	cin>>v[i].first>>v[i].second;
	sort(v.begin(),v.end());
	while(sum<s)
	{
		days++;
		if(days==(v[j].first))
		{
			sum=sum+v[j].second;
			j++;
		}
		else
			sum=sum+x;
	}
	cout<<days;
}
