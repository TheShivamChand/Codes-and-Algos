#include <iostream>
using namespace std;
int main() 
{
	int n,m;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	cin >> m;
	int c[m];
	for(int i=0;i<m;i++)
		cin >> c[i];
	int y=max(a[n-1],c[m-1]);
	for(int i=0;i<y;i++)
	{
		int w=0;
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<m;k++)
			{
				if(i+a[j]==c[k] )
				{
					w++;
					break;
				}
			}
		}
		if(w==n)
		cout << i << " ";
	}
}
