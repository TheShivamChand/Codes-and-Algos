#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll histogram(ll *a, ll n)
{
    stack<ll>s;
    ll i=0,maxArea=0,area,temp;
    while(i<n)
    {
        if(s.empty() or a[i]>=a[s.top()])
            s.push(i++);
        else
        {
            temp=s.top();
            s.pop();
            area=a[temp]*(s.empty()?i:i-s.top()-1);
            maxArea=max(maxArea,area);
        }
    }
    while(!s.empty())
    {
        temp=s.top();
        s.pop();
        area=a[temp]*(s.empty()?i:i-s.top()-1);
        maxArea=max(maxArea,area);
    }
    return maxArea;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    while(cin>>n)
    {
        if(n==0)
            break;
        ll *a=new ll[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<histogram(a,n)<<"\n";
    }
}