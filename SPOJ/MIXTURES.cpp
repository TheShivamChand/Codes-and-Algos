#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int sum(int *a,int i,int j)
{
    int res=0;
    for(int k=i;k<=j;k++)
        res=((res%100)+(a[k]%100))%100;
    return res;
}
 
int mcm(int *a,int i,int j)
{
    if(i==j)
        return 0;
    if(abs((int)(i-j))==1)
        return a[i]*a[j];
    if(dp[i][j]!=-1)
        return dp[i][j];
    int res=INT_MAX;
    for(int k=i+1;k<=j;k++)
    {
        int val=mcm(a,i,k-1)+mcm(a,k,j)+(sum(a,i,k-1)*sum(a,k,j));
        if(val<res)
            res=val;
    }
    dp[i][j]=res;
    return res;
}
 
 
int main()
{
	int n;
	while(cin>>n)
	{
		if(!n)
			exit;
    	int *a=new int[n];
    	for(int i=0;i<n;i++)
    	    cin>>a[i];
    	for(int i=0;i<100;i++)
    	    for(int j=0;j<100;j++)
    	        dp[i][j]=-1;
    	cout<<mcm(a,0,n-1)<<"\n";
	}
} 
