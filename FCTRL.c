#include <stdio.h>
int main()
{
    unsigned long int i;
    int t;
    int c;
    scanf("%d",&t);
    while(t--)
	{
		c=0;
		scanf("%lu",&i);
		while(i!=0)
			{
			c+=(i/5);
			i/=5;
			}
    printf("%d\n",c);
	}
    return 0;
} 
