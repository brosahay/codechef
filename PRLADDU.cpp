#include <stdio.h>
#include <iostream>
#include <cstdio>
#define ll long long
#define size 100000
using namespace std;
int mod(int n)
{
	return (n<0)?-n:n;
}
int max(int a,int b)
{
	return (a>b)?a:b;
}
int min(int a,int b)
{
	return (a<b)?a:b;
}
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("PRLADDU.txt", "r", stdin);
	#endif
	ll int t,n;
	ll int i,j,l,r,index,m,dist,grass;
	scanf("%lld",&t);
	while(t--)
	{
		i=index=m=dist=grass=0;
		scanf("%lld",&n);
		ll int d[n];
		ll int neg[n];
		for(i=0;i<n;i++)
			d[i]=neg[i]=0;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&d[i]);
		}
		for(i=0;i<n;i++)
		{
			if(d[i]<0)
			{
				if(i==0)
					index++;
				while(d[i]!=0&&index<n)
				{
					m=min(d[index],mod(d[i]));
					d[i]+=m;
					d[index]-=m;
					dist=m*(mod(i-index));
					grass+=dist;
					if(d[index]==0||d[index]<0)
						index++;
				}
			}
		}
		printf("%lld\n",grass);
	}
	return 0;
}