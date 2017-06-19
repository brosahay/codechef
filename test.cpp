#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <map>
#define ll long long
using namespace std;
int main()
{
	int t,n;
	ll int i,sum,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		map<int, ll int> mymap;
		map<int, ll int>::iterator it;
		sum=c=0;
		i=0;
		for(; i<n; ++i)
			scanf("%lld",mymap[i]);
		for(i=i-1;i>=0;--i,c++)
			if(c%2==0)
			sum+=mymap[i];
		printf("%lld\n",sum);
	}
	return 0;
}