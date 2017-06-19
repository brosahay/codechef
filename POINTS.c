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
	int t,n,i,j.tmp;
	float sum;
	fastRead(&t);
	for(;t;t--)
	{
		fastRead(&n);
		sum=0;
		int p[n][2];
		for(i=0;i<n;i++)
		fastRead(&p[i][0]),fastRead(&p[i][1]);
		for(i=0;i<n;i++)
		for(j=i;j<n;j++)
		{
			if(p[i][0]>p[j][0])
			{
				tmp=p[i][0];
				p[i][0]=p[j][0];
				p[j][0]=tmp;
				tmp=p[i][1];
				p[i][1]=p[j][1];
				p[j][1]=tmp;
			}
			else if(p[i][0]==p[j][0]&&p[i][1]>p[j][1])
			{
				tmp=p[i][0];
				p[i][0]=p[j][0];
				p[j][0]=tmp;
				tmp=p[i][1];
				p[i][1]=p[j][1];
				p[j][1]=tmp;
			}
		}
		for(i=1;i<n;i++)
		sum+=sqrt(((p[i][0]-p[i-1][0])*(p[i][0]-p[i-1][0]))+((p[i][1]-p[i-1][1])*(p[i][1]-p[i-1][1])));
		printf("%f",sum);
	}
	return 0;
}
