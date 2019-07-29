#include<iostream>
using namespace std;
int main()
{
	long long n,sum1=0,sum2=0,sum3=0;
	cin>>n;
	int a[n];
	for(long i=1;i<=n;i++)
	{
		cin>>a[i];
		if(i%3==1)
		{
			sum1+=a[i];
		}
		else if(i%3==2)
		{
			sum2+=a[i];
		}
		else if(i%3==0)
		{
			sum3+=a[i];
		}
	}
	cout<<sum1<<" "<<sum2<<" "<<sum3;
}
