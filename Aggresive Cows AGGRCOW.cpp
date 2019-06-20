#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

bool check(ll *a,ll n,ll c,ll mid)
{
    int count=1;
    ll last_pos=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]-last_pos>=mid)
        {
            count++;
            last_pos=a[i];
        }
        if(count==c)
        {
            return true;
        }
    }
    if(count==c)
        return true;
    else
        return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        ll *a=new ll[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        ll start=0;
        ll end=a[n-1];
        ll ans=0;
//        cout<<check(a,n,c,2);
        while(start<=end)
        {
           
            ll mid=(start+end)>>1;
                cout<<start<<"\t"<<mid<<"\t"<<end<<endl; 
            if(check(a,n,c,mid))
            {
                ans=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}