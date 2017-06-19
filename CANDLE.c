#include <stdio.h>
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
	//putchar_unlocked('\n');
}
int main()
{
	int t,i,min,pos,a[10];
	fastRead(&t);
	for(;t;t--)
	{
		min=9,pos=-1;
		for(i=0;i<10;i++) fastRead(&a[i]);
		for(i=1;i<10;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
				pos=i;
			}
		}
		if(a[0]+1<=min)
		{
			putchar_unlocked('1');
			for(i=0;i<=a[0];i++)
			putchar_unlocked('0');
			putchar_unlocked('\n');
		}
		else
		{
			for(i=0;i<=min;i++)
			fastWrite(pos);
			putchar_unlocked('\n');
		}
	}
return 0;
}
