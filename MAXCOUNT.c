#include <stdio.h>
inline int fastread()
{
	int i=0;
	char c=0;
	while (c<33)
	c=getchar_unlocked();
	while (c>33)
		{
			i = i*10+c-'0';
			c=getchar_unlocked();
		}
	return i;
}
int main()
{
	int t,max,p,index,n;
	t=fastread();
	for(;t;t--)
	{
		max=0;
		int ar[10001]={0};
		n=fastread();
		for(;n;n--)
		{
			index=fastread();
			ar[index]++;
			if(ar[index]>max)
			max=ar[index],p=index;
			if(ar[index]==max&&index<p)
			p=index;
		}
		printf("%d %d\n",p,max);
	}
	return 0;
} 
