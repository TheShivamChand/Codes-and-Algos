#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,k,n,flag=0;
		cin>>x>>y>>k>>n;
		int l=x-y;
		int p[n],c[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i]>>c[i];
			if(p[i]>=l && c[i]<=k)
			flag=1;
		}
		if(flag==1)
			cout<<"LuckyChef\n";
		else
			cout<<"UnluckyChef\n";
	}
}
