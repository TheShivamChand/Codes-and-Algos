#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i,n,x,count=1;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>x;
	sort(a,a+n);
	for(i=0;i<n-1;i++)
	{
		if(count==x)
		break;
		if(a[i]==a[i+1])
			{
				count++;
				if(count==x)
					break;
			}
		else
		{
			count=1;
			continue;
		}
	}
	cout<<a[i];
}
