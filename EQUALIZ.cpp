#include <stdio.h>
using namespace std;
void am(double *a,int beg,int end)
{
	int n=end-beg,i;
	float mean=0;
	for(i=0;i<n;i++)
		mean+=a[i];
	mean=mean/n;
	for(i=0;i<n;i++)
		a[i]=mean;
}
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("EQUALIZ.txt", "r", stdin);
	#endif
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		double a[n];
		for(i=0;i<n;i++)
			scanf("%lf",&a[i]);

	}
}