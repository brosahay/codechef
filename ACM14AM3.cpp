#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
#include <math.h>
#define ll long long
using namespace std;
char s[20001];
ll int kid_div(char *s,ll int k,ll int j,ll int m)
{
	ll int l,i,r,d=0;
	for(i=k;i<=j;i++)
	{
		d=(d*10)+s[i]-'0';
		r=d%m;
		if(d>=m || d==0)
			r=d%m;
	}
	return r;
}
/*ll compute(char *s,ll int i,ll int j,ll int m)
{
	ll int w=0,tmp;
	while((j-i)>=0)
	{
		tmp=(((s[i]-'0')%m)*((int)pow(10,j-i))%m)%m;
		w=((w%m)+(tmp%m))%m;
		i++;
	}
	return w;
}*/
ll convert(char *s,int i,int j)
{
	ll int tmp;
	while((j-i)>=0)
	{
		tmp+=(s[i]-'0')*(int)pow(10,j-i);
	}
	return tmp;
}
int main()
{
	//#ifndef ONLINE_JUDGE
    //freopen("ACM14AM3.in", "r", stdin);
	//#endif
	char mstr[3];
	memset(s,0,20001);
	memset(mstr,0,3);
	scanf("%s",&s);
	ll int q,m,l,w;
	ll int c,i,j,len,tmp,mlen,tlen;
	i=j=len=0;
	while(s[i++]!=0)
		len++;
	scanf("%lld",&q);
	while(q--)
	{
		cout<<"Q:"<<q<<endl;
		c=0;
		scanf("%lld%lld",&m,&l);
		tmp=m;
		cout<<"tmp:"<<tmp<<endl;
		mlen=0;
		while(tmp!=0)
		{
			//puts("fuck1");
			mstr[mlen++]=(char)(tmp%10)+'0';
			//puts("fuck2");
			tmp=tmp/10;
			//puts("fuck3");
			cout<<mlen;
			//puts("fuck4");
		}
		for(i=0;i<len;i++)
		{
			for(j=i;j<len;j++)
			{
				tlen=j-i;
				if(tlen<mlen)
				{
					w=convert(s,i,j++);
					if(w==l)
						c++;
					j++;
					tlen++;
				}
				if(tlen==mlen)
				{
					if(s[tlen]<=mstr[2])
					{
						if(s[tlen-1]<=mstr[1])
						{
							if(s[tlen-2]<mstr[0])
							{
								w=convert(s,i,j);
								if(w==l)
									c++;
								j++;
							}
						}
					}
				}
				w=kid_div(s,i,j,m);
				if(w==l)
				c++;
			}
		}
		printf("%lld\n",c);
	}
	return 0;
}