#include<bits/stdc++.h>
using namespace std;
vector<int>num(1000001);
void cubefree()
{
    for(int i=2;(i*i*i)<1000001;i++)
    {
        for(int j=i*i*i;j<1000001;j+=(i*i*i))
            num[j]=-1;
    }
    int x=1;
    for(int i=1;i<1000001;++i)
    {
        if(!num[i])
            num[i]=x++;
    }
}


int main()
{
    cubefree();
    int t,n;
    cin>>t;
    int i=1;
    while(t--)
    {
        int n;
        cin>>n;
        if(num[n]==-1)
            cout<<"Case "<<i++<<": Not cube free\n";
        else
            cout<<"Case "<<i++<<": "<<num[n]<<"\n";
    }
}