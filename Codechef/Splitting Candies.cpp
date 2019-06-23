#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		if(k==0)
			cout<<"0 "<<n<<"\n";
		else
			cout<<n/k<<" "<<n%k<<"\n";
	}
}
