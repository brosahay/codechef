#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char in[1000002];
    int t,i,flag,check,l,m,s;
    scanf("%d\n",&t);
    while(t--)
    {
        flag=1;
        scanf("%s",in);
        l=strlen(in);
        s=l>>1;
        check=0;
        for(i=0;i<l;i++)
        {
            if(in[i]!='9')
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            in[0]='1';
            for(i=1;i<l;i++)
            in[i]='0';
            in[l]='1';
            in[l+1]='\0';
            check=1;
        }
        flag=0;
        if(check!=1)
        {
            for(i=0;i<s;i++)
            {
                if(in[i]<in[l-1-i])
                flag=-1;
                else if(in[i]>in[l-1-i])
                flag=1;
                in[l-1-i]=in[i];
            }
 
            if(!(l&1))
            m=s-1;
            else m=s;
            if(flag==0||flag==-1)
            {
                i=0;
                while(in[m-i]=='9')
                {
                    in[m-i]='0';
                    in[l-1-m+i]='0';
                    i++;
                }
 
                in[m-i]++;
                in[l-1-m+i]=in[m-i];
        }
    }
    printf("%s\n",in);
    }
    return 0;
}