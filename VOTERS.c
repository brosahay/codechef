#include <stdio.h>
#include <stdlib.h>
#define size 1000000
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
	int n1,n2,n3,v,i,c=0;
	fastRead(&n1);
	fastRead(&n2);
	fastRead(&n3);
	char votes[size]={0};
	for(i=0;i<n1+n2+n3;i++)
	{
		fastRead(&v);
		votes[v]++;
		if(votes[v]>1)
            c++;
        if(votes[v]>2)
            c--;
	}
	fastWrite(c);
	for(i=0;i<size;i++)
	if(votes[i]>1)
	fastWrite(i);
	return 0;
}
