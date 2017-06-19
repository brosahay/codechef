#include <stdio.h>

#define size 100000000

long long int val[size]={0};

long long int value(long long int coin)
{
	if(coin<12)
		return coin;
	else if(coin<size)
	{
		if(val[coin]==0)
		{
			val[coin]+=value(coin/2)+value(coin/3)+value(coin/4);
		}
		return val[coin];
	}
	else
		return value(coin/2)+value(coin/3)+value(coin/4);
}

int main()
{
	long long int n;
	for(n=0;n<12;n++)
		val[n]=n;
	while(scanf("%lld",&n)!=0)
	{

		printf("%lld\n",value(n));
	}
	return 0;
}
