#include <stdio.h>
int main()
{
	int t,k,n,c=0;
	fscanf(stdin,"%d%d",&t,&k);
	while(t--)
	{
		fscanf(stdin,"%d",&n);
		if(n%k==0)
		c++;
	}
	fprintf(stdout,"%d",c);
	return 0;
}
