#include <stdio.h>

int main()
{
	int t,p,sum;
	int max_price;
	scanf("%d",&t);
	for(;t;t--)
	{
		scanf("%d",&p);
		sum=0;
		max_price=2048;
	for(;max_price;)
	{
		sum +=p/max_price;
		p = p%max_price;
		max_price = max_price/2;
	}
	printf("%d\n",sum);
	}
	return 0;
} 
