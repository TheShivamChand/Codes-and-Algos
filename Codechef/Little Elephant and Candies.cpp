#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, n;
	long c;
	cin>>t;
	while(t--)
	{
		long sum=0;
		cin>>n>>c;
		int a[n];
		for(long i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		if(c>=sum)
		{
			cout<<"Yes\n";
		}
		else
			cout<<"No\n";
	}
}
