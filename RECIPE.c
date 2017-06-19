#include <stdio.h>
int main()
{
	int t,i,c,n,min;
	scanf("%d",&t);
	for(;t;t--)
	{
		scanf("%d",&n);
		//printf("n:%d\n",n);
		int ar[n];
		min=1001;
		for(i=0;i<n;i++)
		{
			scanf("%d",&ar[i]);
			if(min>ar[i])
			min=ar[i];
		}
		//printf("min:%d\n",min);
		for(;min;min--)
		{
			c=0;
			for(i=0;i<n;i++)
			if(ar[i]%min!=0)
			break;
			else
			c++;
			if(c==n)
			break;
		}
		for(i=0;i<n;i++)
		printf("%d ",ar[i]/min);
		puts("");
	}
	return 0;
}
