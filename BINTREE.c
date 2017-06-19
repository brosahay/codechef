#include <stdio.h>
#include <stdlib.h>

inline void fastRead(int *a)
{
	register char c=0;
	while (c<33) c=getchar_unlocked();
	*a=0;
	while (c>33)
	{
		*a=*a*10+c-'0';
		c=getchar_unlocked();
	}
}
inline void fastWrite(int a)
{
	char snum[20];
	int i=0;
	do
	{
		snum[i++]=a%10+48;
		a=a/10;
	}while(a!=0);
	i=i-1;
	while(i>=0)
	putchar_unlocked(snum[i--]);
	putchar_unlocked('\n');
}

int main()
{
	int n;
	int i,j;
	int c;
	fastRead(&n);
	while(n--)
	{
		c=0;
		//scanf("%d%d",&i,&j);
		fastRead(&i);
		fastRead(&j);
		while(i!=j)
		{
			if(i>j)
			{
				i=i>>1;
				c++;
			}
			else
			{
				j=j>>1;
				c++;
			}
		}
		//printf("%d\n",c);
		fastWrite(c);
	}
}