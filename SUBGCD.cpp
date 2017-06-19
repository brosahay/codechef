#include <stdio.h>
using namespace std;
int euclid_gcd(int a,int b)
{
return b == 0 ? a : a > b ? euclid_gcd(b, a%b) : euclid_gcd(a, b%a);
}
int main()
{
	int t,n,gcd;
	int f,l,i;
	#ifndef ONLINE_JUDGE
    freopen("SUBGCD.txt", "r", stdin);
	#endif
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(i==0)
				gcd=a[i];
			else
				gcd=euclid_gcd(gcd,a[i]);
		}
		if(gcd==1)
		printf("%d\n",n);
		else
			puts("-1");
	}
	return 0;
}