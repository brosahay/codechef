#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int arr[200];
int mul_arr(int *a,int size,int m)
{
	int tmp,x,index=0;
	tmp=0;
	while(index<size)
	{
		//printf("index:%dsize:%dtemp:%d\n",index,size,tmp);
		x=a[index]*m+tmp;
		a[index]=x%10;
		tmp=x/10;
		index++;
	}
	while(tmp)
	{
		//printf("index:%dsize:%dtemp:%d\n",index,size,tmp);
		a[index++]=tmp%10;
		tmp=tmp/10;
	}
	return index;
}
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("FCTRL2.txt", "r", stdin);
	#endif
	int t,n;
	int i,size;
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<200;i++)
			arr[i]=0;
		arr[0]=1;
		size=1;
		scanf("%d",&n);
		i=1;
		while(i<=n)
		{
			size=mul_arr(arr,size,i);
			i++;
		}
		for(i=size-1;i>=0;i--)
		{
			printf("%d",arr[i]);
		}
		printf("\n");
	}
	return 0;
}