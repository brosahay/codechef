#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define	size 100000

char str[size]={0};

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

inline void *ip()
{
	int i=0;
    register int temp=getchar_unlocked();
    while(temp<'0'||temp>'9')
        temp=getchar_unlocked();
    while(temp>='0'&&temp<='9')
    {
        str[i++]+=(char)temp;
        temp=getchar_unlocked();
    }
}

int main()
{
	int n,m,x;
	//char str[size]={0};
	//int a[size]={0};
	int b1,b2,by;
	int i;
	fastRead(&n);
	fastRead(&m);
	ip();
	//scanf("%s",str);
	/*for(i=0;i<n;i++)
		a[i]=(int)str[i]-48;*/
	while(m--)
	{
		by=0,b1=0,b2=0;
		fastRead(&x);
		for(i=0;i<x;i++)
		{
			by=str[x-1]-str[i];
			if(by>=0)
				b1+=by;
			else
				b2+=by;
		}
		by=b1-b2;
		fastWrite(by);
	}
	return 0;
}