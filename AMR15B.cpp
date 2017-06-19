#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef pair<long long int,long long int> pair_k;
map<pair_k, long long int> gcd_map;
long long int gcd(long long int a,long long int b)
{
    if(a>=b)
      make_pair(a,b);
    else
      make_pair(b,a);
    
    if(b==0) return a;
    return gcd(b,a%b);
}

void printPowerSet(long long int *set,long long int set_size)
{
    long long int pow_set_size = pow(2, set_size);
    long long int counter, j;
    long long int answer=1;
    for(counter = 0; counter < pow_set_size; counter++)
    {
      long long int tmp_gcd=0;
      for(j = 0; j < set_size; j++)
       {
          if(counter & (1<<j))
            tmp_gcd=gcd(set[j],tmp_gcd);
       }
       if(tmp_gcd)
       answer=((answer%MOD)*(tmp_gcd%MOD)%MOD);
    }
    cout<<answer<<endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int x[n];
        for(int i=0; i<n; i++)
          cin >> x[i];
        printPowerSet(x,n);
    }
    return 0;
}