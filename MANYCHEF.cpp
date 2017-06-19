#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

inline bool CHEF(char C, char H, char E, char F)
{
	return (C=='?' || C=='C') && (H=='?' || H=='H') && (E=='?' || E=='E') && (F=='?' || F=='F');
}

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("MANYCHEF.txt", "r", stdin);
	#endif
	int T;
	scanf("%d",&T);
	for (int t = 0; t < T; ++t)	{
		string s;
		cin>>s;
		int i;
		int n = s.length();
		for (i =  n - 1; i >= 0;) 
		{
			if (i>=3 && CHEF(s[i-3], s[i-2], s[i-1], s[i])) {
				s[i-3] = 'C';
				s[i-2] = 'H';
				s[i-1] = 'E';
				s[i-0] = 'F';
				i -= 4;
			} else {
				if (s[i] == '?') {
					s[i] = 'A';
				}
				--i;
			}
		}
		cout << s << endl;
	}
	return 0;
}
