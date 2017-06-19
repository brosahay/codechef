#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
using namespace std;
int arr[100001]={0};
std::vector<int> primes;

int print_primes(long long int l,long long int u)
{
	int i=0,tmp;
	while(i<=u-l)
	{
		tmp=i+l;
		if(!arr[i])
			if(tmp!=0&&tmp!=1)
			printf("%d\n",i+l);
		arr[i]=0;
		i++;
	}
	return 0;
}

int sieve(long long int n)
{
	long long int i,j;
	arr[0]=arr[1]=1;
    for(i=2;i<=n;i++)
    	if(arr[i]==0)
    	{
    		j=i+i;
    		while(j<n)
    		{
    			arr[j]=1;
    			j+=i;
    		}
    	}
    for(i=0;i<=n;i++)
    {
    	if(!arr[i])
    		primes.push_back(i);
    	arr[i]=0;
    }
    return 0;
}

int populate_prime(long long int l,long long int u)
{
	long long int tmp,i;
	for(i=0;i<primes.size();i++)
		{
			tmp=l/primes[i];
			tmp*=primes[i];
			while(tmp<l)
				tmp+=primes[i];
			if(tmp==primes[i])
				tmp+=primes[i];
			while(tmp<=u)
			{
				arr[tmp-l]=1;
				tmp+=primes[i];
			}
		}
		return 0;
}

int main()
{
	long long int t,m,n;
	cin>>t;
	while(t--)
	{
		primes.clear();
		cin>>m>>n;
		sieve(sqrt(n));
		populate_prime(m,n);
		print_primes(m,n);
	}
	return 0;
}