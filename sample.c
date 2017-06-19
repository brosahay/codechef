#include <stdio.h>
int main()
{
	int ar[10]={0},x,tmp,a,b,c,i=0;
	scanf("%d%d%d",&a,&b,&c);
	while(a!=0)
	{
		ar[i++]=a%10;
		a/=10;
	}
	i=0;
	do
	{
		x=ar[i]*b+tmp;
		ar[i++]=x%100;
		tmp=x/100;
		//printf("%d\n",tmp);
	}
	while(tmp!=0);
	i=0;
	do
	{
		x=ar[i]*c+tmp;
		ar[i++]=x%100;
		tmp=x/100;
		//printf("%d\n",tmp);
	}
	while(tmp!=0);
	while(i--)
		printf("%d",ar[i]);
	return 0;
}
