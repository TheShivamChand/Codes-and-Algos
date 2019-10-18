#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,c1=0;
		cin>>n;		
		string s;
		cin>>s;
		for(int i=0;i<n;i++)			//Counting the number of substrings
		{
			if(s[i]=='1')
				c1++;
		}
		if(c1 == 0)				//If substrings=0
            		cout<<"0\n";
        	else					//Else
			cout<<(c1*(c1+1)/2)<<"\n";
	}
	return 0;
}
