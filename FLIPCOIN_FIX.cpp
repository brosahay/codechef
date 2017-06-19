#include <stdio.h>

using namespace std;

int main()
{
    long int n;
    int g,t,i,q;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&g);
        while(g--)
        {
            scanf("%d%ld%d",&i,&n,&q);
            if(n%2==0||i==q)
                printf("%ld\n",n/2);
            else
                printf("%ld\n",n/2+1);
        }
    }
    return 0;
}
