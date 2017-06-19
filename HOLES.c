#include <stdio.h>
int main()
{
	int t=0,j,c;
	char str[100];
	scanf("%d",&t);
	while(t--)
	{
		c=0;
		scanf("%s",&str);
		for(j=0;str[j]!=0;j++)
		{
		if(str[j]=='A'||str[j]=='D'||str[j]=='O'||str[j]=='P'||str[j]=='R'||str[j]=='Q')
		c++;
		if(str[j]=='B')
		c=c+2;
		}
		printf("%d\n",c);
	}
		return 0;
}
