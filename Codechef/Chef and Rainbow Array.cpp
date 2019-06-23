#include<bits/stdc++.h>
using namespace std;
int check()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int c=1;
	for(int i=0;i<(n+1)/2;i++)
	{
		if(a[0]!=1||a[(n-1)/2]!=7)
		{
			cout<<"no"<<endl;
			return 0;
		}
		if(a[i]!=a[n-i-1])
		{
			cout<<"no"<<endl;
			return 0;
		}
		if(i>0&&(a[i]-a[i-1])>1)
		{
			cout<<"no"<<endl;
			return 0;
		}
	}
	cout<<"yes"<<endl;
	return 0;
}


int main()
{
	long t;
	cin>>t;
	while(t--)
	{
		check();
	}
}
