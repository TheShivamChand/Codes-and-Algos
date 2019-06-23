/**************************************
Author: Shivam Chand
Username: @theshivamchand
**************************************/

#include<bits/stdc++.h>
using namespace std;
main()
{

    int t;
    cin>>t;
    int d,ctr,a,i;
    string s;
    float per;
    while(t--)
    {
        cin>>d;
        cin>>s;
        a=count(s.begin(),s.end(),'P');
        per=(float) a/d;
         i=2;
        ctr=0;
        if(d>=4)
        {
        while(i<d-2 && per<0.75)
        {
            if(s[i]=='A')
            {
            if((s[i-1]=='P' || s[i-2]=='P') && (s[i+1]=='P' || s[i+2]=='P'))
            {
                ctr++;
                a++;
               per=(float) a/d;
                if(per>=0.75)
                {
                    break;
                }
            }
            }
            i++;
        }
        }
        if(per>=0.75)
        {
            cout<<ctr<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        s.clear();
    }
}