#include<iostream>
#include<string>
using namespace std;
int main()
{
	string x;
	int sum=0;
	cin>>x;
	for(int i=0;i<10;i++)
	{
		sum=sum+(i+1)*x[i];
	}
	if(sum%11==0)
		cout<<"Legal ISBN";
	else
		cout<<"Illegal ISBN";
}
