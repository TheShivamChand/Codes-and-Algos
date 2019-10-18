#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
vector<bool>prime(1000001,true);
void isprime()						//To determine if the number is prime or not
{
	for(int i=2;i*i<=1000000;i++)
	{
		if(prime[i]==true)
		{
			for(int p=i*i;p<=1000000;p+=i)
				prime[p]=false;
		}
	}
}

int findprime(int n,map<int,int>&factors)		//Finding the prime factors
{
	for(int i=2;i*i<=n;i++)
	{
		if(prime[i] && n%i==0)
		{
			int count=0;
			while(n%i==0)
			{
				count++;
				n/=i;
			}
			factors[i]+=count;
		}
	}
	if(n>=2)
		factors[n]+=1;
}

int main()					//Main function
{
	isprime();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		map<int,int> factors;
		for(int i=0;i<n;i++)
		{
			int d;
			cin>>d;
			findprime(d,factors);
		}
		ll ans=1;
		map<int,int>::iterator it;
		for(it=factors.begin();it!=factors.end();it++)
		{
			ans*=(it->second+1);
		}
		cout<<ans<<"\n";
	}
}
