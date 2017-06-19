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
#include <climits>

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
		//cout<<"TEST :"<<(6-T)<<endl;
		int n;
		s(n);
		int arr[2][n];
		int max_x,max_y,min_x,max2_y;
		max_x=max_y=min_x=max2_y=0;
		forall(i,0,n)
		{
			//input x
			s(arr[0][i]);
			if(arr[0][max_x]<arr[0][i])
				max_x=i;
			if(arr[0][min_x]>arr[0][i])
				min_x=i;
			//input y
			s(arr[1][i]);
			if(arr[1][max_y]<arr[1][i])
			{
				max2_y=max_y;
				max_y=i;
			}
			else if(arr[1][max2_y]<arr[1][i])
			{
				max2_y=i;
			}
			if(arr[1][max_y]==arr[1][i])
			{
				if(arr[0][max_y]<arr[0][i])
				{
					if(arr[0][max2_y]>arr[0][max_y])
						max2_y=max_y;
					max_y=i;
				}
			}
			if(arr[1][max2_y]==arr[1][i])
			{
				if(arr[0][max2_y]>arr[0][i])
				{
					max2_y=i;
				}
			}
		}
		int count=0;
		if(arr[0][max_y]<=arr[0][min_x])
		{
			count=1;
			cout<<count<<endl<<(max_y+1)<<" SE"<<endl;
		}
		else if(arr[0][max_y]>=arr[0][max_x])
		{
			count=1;
			cout<<count<<endl<<(max_y+1)<<" SW"<<endl;
		}
		else if(arr[1][max_y]==arr[1][max2_y])
		{
			if(arr[0][max2_y]<=arr[0][min_x]){
				count=1;
				cout<<count<<endl<<(max2_y+1)<<" SE"<<endl;
			}
			else if(arr[0][max2_y]>=arr[0][max_x]){
				count=1;
				cout<<count<<endl<<(max2_y+1)<<" SW"<<endl;
			}
		}
		if(arr[0][max_y]>=arr[0][max2_y] && count!=1)
		{
			count=2;
			cout<<count<<endl;
			cout<<(max_y+1)<<" SW"<<endl;
			cout<<(max2_y+1)<<" SE"<<endl;
		}
		else if(arr[0][max_y]<arr[0][max2_y] && count!=1)
		{

			count=2;
			cout<<count<<endl;
			cout<<(max_y+1)<<" SE"<<endl;
			cout<<(max2_y+1)<<" SW"<<endl;
		}
	}
	return 0;
}