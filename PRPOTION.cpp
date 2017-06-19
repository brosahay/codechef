#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits>
#include <algorithm>
using namespace std;
#define ll long long
void compute(ll int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=a[i]/2;
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("PRPOTION.txt", "r", stdin);
	#endif
	int t,R,G,B,M;
	ll int r[100],g[100],b[100],max;
	int i;
	cin>>t;
	while(t--)
	{
		memset(r,0,sizeof(ll int)*100);
		memset(g,0,sizeof(ll int)*100);
		memset(b,0,sizeof(ll int)*100);
		cin>>R>>G>>B>>M;
		for(i=0;i<R;i++)
		{
			cin>>r[i];
		}
		for(i=0;i<G;i++)
		{
			cin>>g[i];
		}
		for(i=0;i<B;i++)
		{
			cin>>b[i];
		}
		sort(r,r+R);
		sort(g,g+G);
		sort(b,b+B);
		while(M--)
		{
			if(r[R-1]>=g[G-1])
			{
				if(r[R-1]>=b[B-1])
				{
					compute(r,R);
				}
				else
					compute(b,B);
			}
			else
			{
				if(g[G-1]>=b[B-1])
					compute(g,G);
				else
					compute(b,B);
			}
		}
		max=r[R-1];
		if(r[R-1]>=g[G-1])
			{
				if(r[R-1]>=b[B-1])
				{
					max=r[R-1];
				}
				else
					max=b[B-1];
			}
			else
			{
				if(g[G-1]>=b[B-1])
					max=g[G-1];
				else
					max=b[B-1];
			}
		cout<<max<<endl;
	}
	return 0;
}