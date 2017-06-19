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
#include <vector>
#include <utility>

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

int main()
{
	s(T);
	while(T--)
	{
		int n;
		s(n);
		int tmp;
		int sum=0;
		typedef pair<int,int> pair_k;
		map<int, pair_k> arr;
		forall(i,0,n)
		forall(j,0,n)
		{
			s(tmp);
			arr[tmp]=make_pair(i,j);
		}
		map<int,pair_k>::iterator it;
		map<int,pair_k>::iterator it2;
		it=arr.begin();
		it2=arr.begin();
		it2++;
		forall(i,0,n*n-1)
		{
			sum+=abs(((it->second).first)-(it2->second).first);
			sum+=abs(((it->second).second)-(it2->second).second);
			it++;
			it2++;
		}
		cout<<sum<<endl;
	}
    return 0;
}