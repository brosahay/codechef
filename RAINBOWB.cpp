#include <stdio.h>
using namespace std;

int main() {
	long long int n;
	long long int v=1,i,tmp,v2=0,v3=0,v4=0,v5=0,v6=0;
	long long int mod=1000000007;
	scanf("%lld",&n);
	if(n<13)
	{
		printf("0");
		return 0;
	}
	n=(n-13)/2;
	for(i=1;i<7;i++)
	{
		tmp=n+i;
		if(tmp%6==0 && v6==0)
		{
			tmp=tmp/6;
			v6=1;
		}
		if(tmp%5==0 && v5==0)
		{
			tmp=tmp/5;
			v5=1;
		}
		if(tmp%4==0 && v4==0)
		{
			tmp=tmp/4;
			v4=1;
		}
		if(tmp%3==0 && v3==0)
		{
			tmp=tmp/3;
			v3=1;
		}
		if(tmp%2==0 && v2==0)
		{
			tmp=tmp/2;
			v2=1;
		}
		v=(v%mod*tmp%mod)%mod;
	}
	printf("%lld",v);
	return 0;
}
