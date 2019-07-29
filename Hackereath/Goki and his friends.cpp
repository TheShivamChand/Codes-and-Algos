#include<iostream>
using namespace std;
int main()
{
	long n,x,y,i;
	cin>>n;
	cin>>x;
	for(int i=0;i<n;i++)
	{
		cin>>y;
		if(y>=x)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<"\n";
	}
}
