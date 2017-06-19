#include <stdio.h>
using namespace std;
int main()
{
	int t,m,n;
	int i,sum,tmp;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
		{
			scanf("%d",&tmp);
			sum+=tmp;
		}
		sum+=m;
		if(sum%n==0)
			puts("Yes");
		else
			puts("No");
	}
	return 0;
}