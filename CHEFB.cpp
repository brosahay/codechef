#include <stdio.h>
#include <string.h>
#include <algorithm>
#define ll long long
using namespace std;
char prime[1000001]={0,1};
void seive()
{
	int i,j,tmp;
	for(i=2;i<1000001;i++)
	{
		if(prime[i]==0)
		{
			j=2;
			for(;tmp<1000001;j++)
			{
				tmp=i*j;
				prime[tmp]=1;
			}
		}
	}
}
int main()
{
	int t,n;
	ll int i,sum,c;
	scanf("%d",&t);
	seive();
	while(t--)
	{
		scanf("%d",&n);
		ll int ar[n];
		memset(ar,0,sizeof(ll int)*n);
		sum=c=0;
		for(i=0;i<n;i++)
			scanf("%lld",&ar[i]);
		sort(ar,ar+n);

			
	}
	return 0;
}