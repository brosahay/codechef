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
	putchar_unlocked('\n');
}
int main()
{
	int a[1000001]={0};
	int t,in,i;
	fastRead(&t);
	for(i=0;i<t;i++)
	{
		fastRead(&in);
		a[in]++;
	}
	for(i=0;i<1000001;i++)
	{
		while(a[i])
		{
			fastWrite(i);
			a[i]--;
		}
	}
	return 0;
}
