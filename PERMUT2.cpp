#include <iostream>
using namespace std;
int main()
{
	int n;
	int i,flag;
	while(true)
	{
		flag=n=i=0;
		cin>>n;
		if(n==0)
			break;
		int arr[n];
		int inv[n];
		for(i=0;i<n;i++)
			arr[i]=inv[i]=0;
		for(i=0;i<n;i++){
			cin>>arr[i];
			inv[arr[i]-1]=i+1;
		}
		for(i=0;i<n;i++)
			if(inv[i]!=arr[i])
				{
					flag=1;
					break;
				}
		if(flag)
			cout<<"not ambiguous";
		else
			cout<<"ambiguous";
		cout<<endl;
	}
}