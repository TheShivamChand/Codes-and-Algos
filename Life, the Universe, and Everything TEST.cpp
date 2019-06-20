#include<iostream>
using namespace std;
int main()
{
	int n;
	do{
		cin>>n;
		if(n!=42)
			cout<<n<<"\n";
		else
			break;
	}while(n!=42);
}
