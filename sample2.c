int main()
{
int t;
scanf("%d",&t);
while(t--)
{
	int n;
	scanf("%d",&n);
	if(n==0)
		{
		printf("1\n");
		continue;
		}
	char str[200];
	int index=0;
	int n1=n;
	while(n1>0)
		{
		str[index]=(n1%10)+'0';
		n1/=10;
		index++;
		}
		int temp=0;
		for(int j=n-1;j>1;j--)
		{
		temp=0;
		for(int i=0;i<index;i++)
		{
		int x=(str[i]-'0')*j+temp;
		// printf("x=%d\n",x);
		str[i]=(x%10)+'0';
		// printf("char is %c\n",str[i]);
		temp=x/10;
		}
		while(temp>0)
		{
		str[index]=temp%10+'0';
		index++;
		temp/=10;
		}
		}
		for(int i=index-1;i>=0;i--)
		{
		printf("%c",str[i]);
		}
		printf("\n");
		}
		return 0;
		}
