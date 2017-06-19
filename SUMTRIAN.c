#include <stdio.h>
inline void fastRead(int *a){
register char c=0;
while (c<33) c=getchar_unlocked();
*a=0;
while (c>33)
{
*a=*a*10+c-'0';
c=getchar_unlocked();
}
}
inline void fastWrite(int a){
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
	int t,r,tr[100][100];
	int i,j,sum;
	fastRead(&t);
	for(;t;t--)
	{
		fastRead(&r);
		for(i=0;i<r;i++)
		for(j=0;j<=i;j++)
		fastRead(&tr[i][j]);
		for(i=(r-1);i>0;i--)
		for(j=0;j<i;j++)
		tr[i-1][j]+=(tr[i][j]>tr[i][j+1])?tr[i][j]:tr[i][j+1];
		fastWrite(tr[0][0]);
	}
	return 0;
}
