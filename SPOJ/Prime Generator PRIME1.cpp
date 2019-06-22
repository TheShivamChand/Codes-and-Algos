#include<bits/stdc++.h>
#include<map>
using namespace std;
const int limit=1000000001;
const int SQRT=sqrt(limit)+1;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		map<int, int> com;
		int n,m;
		cin>>n>>m;
		for(int i=2;i<=SQRT;i++)
		{
			int start=max(2*i,((n+i-1)/i)*i);
			for(int j=start;j<=m;j=j+i)
			{
				com[j]=1;
			}
		}
		for(int i=n;i<=m;i++)
		{
			if(com.count(i)==0 && i!=1)
				cout<<i<<"\n";
		}
		cout<<"\n";
	}
}
