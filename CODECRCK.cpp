//@author:ReVo
#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <cmath>
#include <cstring>
#include <map>
#include <algorithm>
#include <stack>
#include <list>

//Shortcuts
#define lli long long int
#define modulo 1000000007
#define s(n) scanf("%lld",&n)
#define p(n) printf("%d\n",n)
#define pl(n) printf("%lld\n",n)
#define sf(n) scanf("%lf",&n)
#define pf(n) printf("%f\n",n)
#define sc(n) scanf("%c",&n);
#define pc(n) printf("%c\n",n)
#define ss(n) scanf("%s",n)
#define ps(n) printf("%s\n",n)

using namespace std;

double x=sqrt(2);
double y=sqrt(3);

int main()
{
	lli k,i,s;
	double a_i,b_i;
	s(i);
	s(k);
	s(s);
	sf(a_i);
	sf(b_i);
	double res=(a_i+b_i);
	lli tmp;
	if(k!=i)
	{
		tmp=(k-i);
		if(tmp&1){
			tmp--;
			i++;
			s--;
			res=x*(a_i+(y*b_i));
		}
		if(k-i)
		res*=(pow(2,(2*tmp-s)));
	}
	else
		res*=(pow(2,-s));
	cout<<res<<endl;
	return 0;
}