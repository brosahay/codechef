#include <stdio.h>

int main()
{
	int x;
	float y;
	scanf("%d",&x);
	scanf("%f",&y);
	if((x%5)||((x+0.50)>y))
		printf("%.2f\n",y);
	else
		printf("%.2f\n",(y-x-0.50));
	return 0;
}
