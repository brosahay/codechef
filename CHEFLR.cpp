#include <stdio.h>
#define size 100002
using namespace std;
int main()
{
    int t;
    long long int v,i;
    char str[size];
    scanf("%d",&t);
    while(t--)
    {
        for(i=0;i<size;i++)
            str[i]=0;
        getchar();
        scanf("%s",&str);
        i=0;
        v=1;
        while(str[i]!=0)
        {
            if(str[i]=='l')
            {
                if(i%2)
                v=(2*v)-1;
                else
                v=(2*v);
            }
            else if(str[i]=='r')
            {
                if(i%2)
                v=(2*v)+1;
                else
                v=(2*v)+2;
            }
            i++;
            if(v>=1000000007)
             v=v%100000007;
        }
        printf("%lld\n",v);
    }
}
