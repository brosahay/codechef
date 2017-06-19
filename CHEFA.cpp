#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <map>
#define ll long long
using namespace std;
int main()
{
	int t,n;
	ll int i,sum,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		ll int ar[n];
		memset(ar,0,sizeof(ll int)*n);
		sum=c=0;
		for(i=0;i<n;i++)
			scanf("%lld",&ar[i]);
		sort(ar,ar+n);
		for(i=n-1;i>=0;i--,c++)
			if(c%2==0)
			sum+=ar[i];
		printf("%lld\n",sum);
	}
	return 0;
}