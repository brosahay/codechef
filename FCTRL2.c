#include <stdio.h>
int main()
{
	int a[200]={1};
	int n,t,i,tmp,dup,x,j;
	scanf("%d%d",&t,&n);
	while(t--)
	{
		i=0;
		scanf("%d",&n);
		if(n==0||n==1)
		{
			puts("1");
			return 0;
		}
		dup=n;
		while(n!=0)
		{
			a[i++]=n%10;
			n/=10;
		}
		for(j=2;j<=dup;j++)
		{
			i=0;
			tmp=0;
			do
			{
				x=a[i]*j+tmp;
				a[i++]=x%100;
				tmp=x/100;
				//printf("%d\n",tmp);
			}
			while(tmp!=0);
		}
		while(i--)
		printf("%d",a[i]);
	}
}
