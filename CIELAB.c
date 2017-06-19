#include <stdio.h>
int main()
{	
	int a,b;
	scanf("%d%d",&a,&b);
	a-=b;
	a=a&-2;
	/*a++;
	if(a%10==0)
	a-=2;*/
	printf("%d",a);
	return 0;
}
