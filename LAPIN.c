#include <stdio.h>
#include <string.h>
inline void fastRead(int *a)
{
	register char c=0;
	while (c<33) c=getchar_unlocked();
	*a=0;
	while (c>33)
	{
		*a=*a*10+c-'0';
		c=getchar_unlocked();
	}
}
int main()
{
	int t,i,l,flag;
	char s[1000];
	fastRead(&t);
	for(;t;t--)
	{
		int p[26]={0};
		flag =0;
		gets(s);
		l=strlen(s);
		if(l<2)
		{
		puts("NO");
		continue;
		}
		for(i=0;i<strlen(s)/2;i++)
		p[(s[i]-97)]++,p[(s[--l]-97)]--;
		for(i=0;i<26;i++)
		//printf("%d %d\n",p1[i],p2[i]);
		if(p[i]!=0)
		{
			puts("NO");
			flag=1;
			break;
		}
		if(flag==0)
		puts("YES");
		
	}
	return 0;
}
