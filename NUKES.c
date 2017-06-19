    #include<stdio.h>
    int main(){
    int n,k;
    long long int a;
    scanf("%lld %d %d",&a,&n,&k);
    while(k--)
    {
    printf("%lld ",(a%(n+1)));
    a/=(n+1);
    }
    printf("\n");
    return 0;
    } 
