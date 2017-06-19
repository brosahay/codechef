#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <map>
#define ll long long
using namespace std;
ll int function(int *b,int l,int r)
{
	ll int x;
	x=1;
	ll int i;
	for(i=l+1;i<=r;i++)
		if(b[i]!=b[i-1])
			x++;
	return x;
}
void modify(int *b,int l,int r)
{
	int n=r-l;
	int tmp[n+1];
	int i,j;
	for(i=0;i<=n;i++)
		tmp[i]=b[l+i];
	j=r;
	for(i=0;i<=n;i++,j--)
			b[j]=b[j-n-1];
	for(i=0;i<=n;i++)
		b[i]=tmp[i];
}
int main()
{
	int n,m,t;
	int ch,l,r;
	int i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		scanf("%d",&m);
		while(m--)
		{
			scanf("%d%d%d",&ch,&l,&r);
			if(ch==1)
				printf("%lld\n",function(arr,l-1,r-1));
			else
				modify(arr,l-1,r-1);
		}
	}
	return 0;
}