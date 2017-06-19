#include <stdio.h>
#include <stdlib.h>
  
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("GRID.txt", "r", stdin);
	#endif
	int t,n;
	int i,j,c;
	scanf("%d",&t);
	while(t--) 
	{
		scanf("%d",&n);
		int row[n];
		int col[n];
		char ar[n][n];
		c=0;
		getchar_unlocked();
		for(i=0;i<n;i++)
		{
			//scanf("%s",ar[i]);
			for(j=0;j<n;j++)
			ar[i][j]=getchar_unlocked();
			getchar_unlocked();
		}
		for(i=0;i<n;i++)
		{
			for(j=n-1;j>=0;j--)
				if(ar[i][j]=='#')
				{
					row[i]=j;
					break;
				}
				if(j==-1)
					row[i]=-1;
		}
		for(i=0;i<n;i++)
		{
			for(j=n-1;j>=0;j--)
				if(ar[j][i]=='#')
				{
					col[i]=j;
					break;
				}
				if(j==-1)
					col[i]=-1;
		}
		for(i=0;i<n;i++)
			for(j=row[i]+1;j<n;j++)
				if(i>col[j])
					c++;
		printf("%d\n",c);
	}
	return 0;
}