#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll n,x,i,count=0;
	cin>>n>>x;
	vector<int> a(n);
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(x>0)
		{
			x=x-a[i];
			count++;
		}
	}
	cout<<count;
}
