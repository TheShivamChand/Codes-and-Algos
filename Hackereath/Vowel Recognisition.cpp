#include<bits/stdc++.h> 
using namespace std; 
int main()  
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int n;
	cin>>n; 
    string s;
	while(n--)
	{
		long count=0,l;
		cin>>s; 
    	for(long i=0;i<s.length();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                count+=(i+1)*(s.length()-i);
            }
        }
        cout<<count<<"\n";
    }
	return 0; 
}
