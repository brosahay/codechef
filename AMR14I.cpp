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
#define s(n) scanf("%d",&n)
#define p(n) printf("%d\n",n)
#define pl(n) printf("%lld\n",n)
#define sf(n) scanf("%f",&n)
#define pf(n) printf("%f\n",n)
#define sc(n) scanf("%c",&n);
#define pc(n) printf("%c\n",n)
#define ss(n) scanf("%s",n)
#define ps(n) printf("%s\n",n)
// Useful constants
#define INF (int)1e9
#define EPS 1e-9
// Useful hardware instructions
#define bitcount __builtin_popcount
#define gcd __gcd
// Useful container manipulation / traversal macros
#define forall(i,a,b) for(int i=a;i<b;i++)
#define foreach(v,c) for(typeof((c).begin()) v=(c).begin();v!=(c).end();++v)
#define all(a) a.begin(),a.end()
#define in(a,b) ((b).find(a)!=(b).end())
#define pb push_back
#define fill(a,v) memset(a,v,sizeof a)
#define sz(a) ((int)(a.size()))
#define mp make_pair
// Some common useful functions
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define checkbit(n,b) ((n>>b)&1)
#define DREP(a) sort(all(a));a.erase(unique(all(a)),a.end())
#define INDEX(arr,ind) (lower_bound(all(arr),ind)-arr.begin())

using namespace std;

int T;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int main()
{
	s(T);
	int n,m,s,p,q;
	int mi,cnt,rf,vf;
	while(T--)
	{
		s(n);
		s(m);
		s(s);
		s(p);
		s(q);
		cnt=0;
		rf=vf=0;
		int rohit,virat;
		rohit=virat=1;
		forall(i,0,s){
			virat+=p;
			rohit+=q;
			if(virat>=m && !vf){
				vf=1;
				virat%=(n-m+1);
			}
			if(rohit>=m && !rf){
				rf=1;
				rohit%=(n-m+1);
			}
			if(rf)
			{
				rohit%=(n-m+1);
			}
			if(vf)
			{
				virat%=(n-m+1);
			}
			//cout<<"VIRAT :"<<virat<<" ROHIT: "<<rohit<<endl;
			if(virat==rohit)
				cnt++;
		}
		cout<<cnt<<endl;
	}
    return 0;
}