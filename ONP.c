#include <stdio.h>
int main()
{
	char str[400],res[400],op[200];
	int t,i,r,o;
	scanf("%d",&t);
	for(;t;t--)
	{
		scanf("%s",str);
		r=0,o=0;
		for(i=0;str[i]!=0;i++)
		{
			if(str[i]=='(')
			continue;
			else if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
			res[r++]=str[i];
			else if(str[i]!=')')
				op[o++]=str[i];
			else if(str[i]==')')
				res[r++]=op[--o];
		}
		res[r]=0;
		printf("%s\n",res);
	}
	return 0;
}
