#include<bits/stdc++.h>
#define long long ll
using namespace std;
bool isprime(int n)
{
	int i;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}

int issum(int d)
{
	int c=0;
	while(d)
	{
		c+=d%10;
		d/=10;
	}
	return c;
}

int main()
{
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
		if(isprime(i) && isprime(issum(i)))
			cout<<i<<" ";
}
