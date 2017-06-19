#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n;
		if(n%2)
			cout<<"BOB";
		else
			cout<<"ALICE";
		cout<<endl;
	}
	return 0;
}