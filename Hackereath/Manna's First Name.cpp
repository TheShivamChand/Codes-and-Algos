#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int su=0,suj=0,i;
		cin>>s;
		for(i=0;i<s.length();i++)
		{
			if(s[i]=='S'&&s[i+1]=='U'&&s[i+2]=='V'&&s[i+3]=='O'&&s[i+4]=='J'&&s[i+5]=='I'&&s[i+6]=='T')
				suj++;
			else if(s[i]=='S'&&s[i+1]=='U'&&s[i+2]=='V'&&s[i+3]=='O')
				su++;
		}
		cout<<"SUVO = "<<su<<", SUVOJIT = "<<suj<<"\n";
	}
}
