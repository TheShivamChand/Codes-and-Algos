#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count19=0;
    int count20=0;
    int count=0;
    while(n--)
    {
        string s;
        getline(cin,s);
        int l=s.length();
        if(s[0]=='G')
        {
            for(int i=0;i<l;i++)
            {
                int x=s[i]-48;
                int y=s[i+1]-48;
                if(((x*10)+y)==19)
                {
                    count19+=2;
                }
                else if(((x*10)+y)==20)
                {
                    count20+=2;
                }
                else if(((x>=0)&&(x<=9))&&((y>=0)&&(y<=9)))
                {
                    count+=2;
                }
            }
        }
        else if(s[0]=='M')
        {
            for(int i=0;i<l;i++)
            {
                int x=s[i]-48;
                int y=s[i+1]-48;
                if(((x*10)+y)==19)
                {
                    count19++;
                }
                else if(((x*10)+y)==20)
                {
                    count20++;
                }
                else if(((x>=0)&&(x<=9))&&((y>=0)&&(y<=9)))
                {
                    count++;
                }
            }
        }
    }
    if(count19==count20)
    {
        cout<<"No Date";
    }
    else if((count19>count)||(count20>count))
    {
        cout<<"Date";
    }
    else
    {
        cout<<"No Date";
    }
    return 0;
}
