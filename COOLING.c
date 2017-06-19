#include <stdio.h>
void sort(int[],int);
int main()
{
	int t,i,j,n,c,p,tmp;
	scanf("%d",&t);
	for(;t&&t<=30;t--)
	{
		scanf("%d",&n);
		int w[n],wl[n];
		for(i=0;i<n;i++)
		scanf("%d",&w[i]);
		for(i=0;i<n;i++)
		scanf("%d",&wl[i]);
		c=0;
		for(i=0;i<n;i++)
		{
			p=-1;
			tmp=105;
			for(j=0;j<n;j++)
				if(wl[j]>=w[i]&&wl[j]<=tmp)
				{
					tmp=wl[j];
					p=j;
				}
				if(p!=-1)
				{
					c++;
					wl[p]=0;
				}					
		}
		printf("%d\n",c);
	}
}
