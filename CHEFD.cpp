#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <map>
#define ll long long
using namespace std;
int maxval;
void update(int *tree,int idx,int val){
	while(idx<=maxval){
		tree[idx]+=val;
		idx+=(idx&-idx);
	}
}
int read(int *tree,int idx){
	int sum=0;
	while(idx>0){
		sum+=tree[idx];
		idx-=(idx&-idx);
	}
	return sum;
}
int main()
{
	int n,m;
	int ch,l,r,p,d;
	int i,tmp;
	maxval=-1;
	scanf("%d",&n);
	int tree[100001]={0};
	for(i=0;i<n;i++){
		scanf("%d",tmp);
		if(maxval<tmp)
			maxval=tmp;
		update(tree,tmp,1);
	}
	scanf("%d",&m);
	while(m--)
	{
		scanf("%d",&ch);
		if(ch==1)
		{
			scanf("%d%d%d",&l,&r,&p);
			l=l;
			r=r;
			while(l<=r)
			{
				if(arr[l]%p==0)
					arr[l]/=p;
				l++;
			}
		}
		else
		{
			scanf("%d%d",&l,&d);
			arr[l-1]=d;
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;
}