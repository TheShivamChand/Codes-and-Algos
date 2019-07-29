#include<iostream>
using namespace std;
int main()
{
	string s;
	int n,k;
	cin>>s;
	cin>>n;
	int x=s.length();
	for(int i=0;i<x;i++)
	{
		if(s[i]>=65 && s[i]<=90)
		{
			n=k%26;
			if((s[i]+n)>90)
				s[i]+=n-26;
			else
				s[i]+=n;
		}
		else if(s[i]>=97 && s[i]<=122 )
		{
			n=k%26;
			if((s[i]+n)>122)
				s[i]+=n-26;
			else
				s[i]+=n;
		}
		else if(s[i]>=48 && s[i]<=57)
		{
			n=k%10;
			if((s[i]+n)>57)
				s[i]+=n-10;
			else
				s[i]+=n;
		}
	}
	cout<<s;
}
