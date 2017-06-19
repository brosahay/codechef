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

int prime[2001]={0};

int chkprime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
		if(n%i==0)
			return -1;
	return 1;
}

int genprime(int n)
{
	while(prime[n]==0)
	{
		prime[n]=chkprime(n);
		if(prime[n]==1)
			return n;
		n++;
	}
	while(prime[n]!=1)
		n++;
	return n;
}

int main()
{
	int t;
	int a,b;
	int sum;
	scanf("%d",&t);
	while(t--)
	{
		//scanf("%d%d",&a,&b);
		fastRead(&a);
		fastRead(&b);
		sum=a+b;
		//printf("%d\n",genprime(sum+1)-sum);
		fastWrite(genprime(sum+1)-sum);
	}
	return 0;
}