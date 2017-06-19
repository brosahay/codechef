#include <stdio.h>
int main()
{
	int t,p1,p2,w,max=0,tmp,sc1=0,sc2=0;
	scanf("%d",&t);
	for(;t;t--)
	{

		scanf("%d",&p1);
		scanf("%d",&p2);
		p1+=sc1;
		p2+=sc2;
		if(p2>p1)
		{
			tmp=p2-p1;
			if(tmp>max)
			{
				max=tmp;
				w=2;
			}
		}
		else
		{
			tmp=p1-p2;
			if(tmp>max)
			{
				max=tmp;
				w=1;
			}
		}
		sc1=p1;
		sc2=p2;
	}
	printf("%d %d",w,max);
	return 0;
}
