#include <stdio.h>
#include <stdlib.h>

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
inline void fastWrite(int a)
{
	char snum[20];
	int i=0;
	do
	{
		snum[i++]=a%10+48;
		a=a/10;
	}while(a!=0);
	i=i-1;
	while(i>=0)
	putchar_unlocked(snum[i--]);
	putchar_unlocked('\n');
}

int main()
{
    int t,i,n,w,v,res;
    fastRead(&t);
    while(t--)
    {
        fastRead(&n);
        res=0;
        v=0;
        for(i=0;i<n;i++)
        {
            fastRead(&w);
            if(w>v)
            {
                res+=(w-v);
                v=w;
            }
            v--;
        }
        fastWrite(res);
    }
    return 0;
}
