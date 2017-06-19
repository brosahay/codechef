//@author:ReVo
#include <bits/stdc++.h>

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

int N,Q;

int read(int *tree,int idx){
	int sum=0;
	while(idx>0){
		sum+=tree[idx];
		idx-=(idx&-idx);
	}
	return sum;
}

void update(int *tree,int idx,int val){
	int maxval=N;
	while(idx<=maxval){
		tree[idx]+=val;
		idx+=(idx&-idx);
	}
}

int readSingle(int *tree,int idx){
	int sum = tree[idx]; 
	if (idx > 0){ 
		int z = idx - (idx & -idx);
		idx--; 
		while (idx != z){ 
			sum -= tree[idx];
			idx -= (idx & -idx);
		}
	}
	return sum;
}
int main()
{
	s(N);
	s(Q);
	int bit[100001]={0};
	int ch,a,b;
	while(Q--)
	{
		s(ch);
		s(a);
		s(b);
		a++;b++;
		if(ch)
			cout<<read(bit,b)-read(bit,a-1)<<endl;
		else{
			int tmp;
			for(;a<=b;a++){
				if(readSingle(bit,a))
					tmp=-1;
				else
					tmp=1;
				update(bit,a,tmp);
			}
		}
	}
	return 0;
}
