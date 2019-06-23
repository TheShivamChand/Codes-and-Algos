#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		cin>>n;
		long long int s[n];
		for(int j=0;j<n;j++)
			cin>>s[j];
		sort(s,s+n);
		long long int diff=INT_MAX;
		for(int i=0;i<n-1;i++)
		{
			diff = min(diff,abs(s[i]-s[i+1]));
		}
		cout<<diff<<endl;
	}	
}
