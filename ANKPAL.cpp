#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <map>
#include <algorithm>
#include <stack>
#include <list>
#include <vector>

#define lli long long int
#define fo(i,n) for(i=0;i<n;i++)
#define fi(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define modulo 1000000007
#define gi(a) scanf("%d",&a)
#define f(n) for(i=0;i<n;i++)
#define pn printf("\n")
#define pb push_back

using namespace std;

int main()
{
	char str[100001];
	scanf ("%s",str);
	int q;
	int i,j,k,l;
	int flag,itmp,jtmp,tmp;
	scanf("%d",&q);
	while(q--)
	{
		scanf("%d",&i);
		scanf("%d",&j);
		scanf("%d",&k);
		scanf("%d",&l);
		i--,j--,k--,l--;
		flag=0,itmp=i,jtmp=j;
		char pk,pl;
		if(l<i||k>j)
		{
			for(;k<=l;k++,l--)
				if(str[k]!=str[l])
				{
					flag=1;
					break;
				}
		}
		else
		{
			for(;k<=l;k++,l--)
			{
				pk=str[k];
				pl=str[l];
				if(k>=itmp&&k<=jtmp)
					pk=str[jtmp-k+itmp];
				if(l>=itmp&&l<=jtmp)
					pl=str[jtmp-l+itmp];
				if(pl!=pk)
				{
					flag=1;
					break;
				}
			}

		}

		if(flag==0)
			puts("Yes");
		else
			puts("No");
	}
    return 0;
}
