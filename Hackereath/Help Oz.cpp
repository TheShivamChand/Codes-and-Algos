#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,k,i;
	cin>>m;
	long long a[m],c;
	for(i=0;i<m;i++)
		cin>>a[i];
	for(k=2;k<=(int)4e8;k++)
	{
		bool flag=true;
        for(int j=0;j<m-1;j++)
        {
            if(a[j]%k!=a[j+1]%k){
                flag=false;
                break;
            }
        }
        if(!flag)
            continue;
        else
            cout<<k<<" ";
	}
}
