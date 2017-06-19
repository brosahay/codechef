#include <stdio.h>

using namespace std;
int n;

int main()
{
    int m;
    int i,d,pos=0;
    char ch;
    scanf("%d%d",&n,&m);
    long long int arr[n];
    for(i=0;i<n;i++)
        scanf("%lld",&arr[i]);
    while(m--)
    {
        getchar();
        scanf("%c %d",&ch,&d);
        if(ch=='R')
            printf("%d \n",arr[(pos+d-1)%n]);
        if(ch=='C')
            pos=(pos+d)%n;
        if(ch=='A')
            {
                pos=(pos-d);
                pos=(pos<0)?pos+n:pos;
            }
    }
    return 0;
}
