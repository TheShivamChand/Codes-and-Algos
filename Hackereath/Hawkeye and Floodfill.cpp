#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n][n];
	int i,j,p,x,y,a,b,max,val=0;
	cin>>i>>j>>p;
	arr[i][j]=p;
	for(x=0;x<n;x++)
	{
		for(y=0;y<n;y++)
		{
			a= abs(x-i);
            b = abs(y-j);
            if(a>=b)
            	max=a;
            else
            	max=b;
            max = p-max;
            if(max>=0)
            	val=max;
            else
            	val=0;
            cout<<val<<" ";
		}
		cout<<"\n";
	}
}
