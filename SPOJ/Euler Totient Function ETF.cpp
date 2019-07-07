#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int totient(ll n)
{
    int ans=n;
    for(int i=2;i*i<=n;++i)
        if(n%i==0)
        {
            while(n%i==0)
                n/=i;
            ans-=ans/i;   
        }      
    if(n>1)
        ans-=ans/n;
    return ans;
}
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        cout<<totient(x)<<"\n";
    }
} 
