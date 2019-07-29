#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int sum=0;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		sum=sum+(int)s[i]-96;
	}	
	cout<<sum;
}
