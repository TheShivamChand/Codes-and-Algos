#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	long int n,x,s=0,i,q,l,r;
	cin>>n>>q;
	long int a[n+1];
	a[0]=0;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		a[i]=a[i-1]+x;
	}
	while(q--)
	{
		cin>>l>>r;
		cout<<(a[r]-a[l-1])/(r-l+1)<<"\n";
	}
	return 0;
}
