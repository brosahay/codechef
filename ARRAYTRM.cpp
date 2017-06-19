#include <iostream>
#include <stdio.h>

#define size 11 //as k<=10 and k+1<=11
using namespace std;

int main()
{
	int t;
    int k;
	int n;
	int i;
	scanf("%d",&t);
	while(t--)
	{
		int arr[size]={0};
		scanf("%d%d",&n,&k);
        int tmp=0;//conisdering the other subset to be empty
		for(i=0;i<n;i++)
		{
		    scanf("%d",&tmp);
		    tmp=tmp%(k+1);//the diffrence b/w the sets wont be more than k+1
		    arr[tmp]++;
		}
		int ans=0;
		for(i=0;i<size;i++)
        {
            if(arr[i])
                ans++;
        }
        if(ans==1)
            puts("YES");
        else if(ans>2)
            puts("NO");
        else
        {
            for(i=0;i<size;i++)
                if(arr[i])
            {
                if(arr[i] == 1 || arr[i] == (n-1))
					puts("YES");
				else
					puts("NO");
				break;
            }
        }
	}
}
