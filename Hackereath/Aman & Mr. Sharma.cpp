#include<iostream>
using namespace std;
const int pi=22/7;
int main()
{
	long int d,x,r,count=0;
	cin>>d;
	for(int i=0;i<d;i++)
	{
		cin>>r>>x;
		if(700*x>=44*r)
			count++;
	}
	cout<<count;
}
