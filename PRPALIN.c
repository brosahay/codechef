#include <stdio.h>
#include <math.h>
int palin(int n)
{
	int a[7]={0},i=0,j;
	while(n!=0)
	{
		a[i++]=n%10;
		n/=10;
	}
	for(j=0;j<=i/2;j++)
	if(a[j]!=a[i-j-1])
	return 0;
	return 1;
}
int prime(int n)
{
	int i;
	for(i=2;i<sqrt(n);i++)
	if(n%i==0)
	return 0;
	return 1;
}
int main()
{
	int n;
	fscanf(stdin, "%d", &n);
	while(!(palin(n)&&prime(n)))
	n++;
	fprintf(stdout, "%d\n", n);
	return 0;
}
