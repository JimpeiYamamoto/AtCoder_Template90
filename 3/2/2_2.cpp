#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
typedef unsigned long long ull;
using Graph = vector< vector<int> >;
vector<bool> seen;
long double	PI = 3.14159265358979;
long long	POW18 = 1000000000000000000LL;
long long	mod9 = 1000000007;

int	main()
{
	int	N; cin >> N;
	if (N % 2)
		return (0);
	for (int bit = 0; bit < (1<<N); bit++)
	{
		ll	cnt1 = 0;
		ll	cnt2 = 0;
		string	str;
		bool	flag = true;
		for (int i = N - 1; i >= 0; i--)
		{
			if (bit & (1 << i))
			{
				str.push_back(')');
				cnt1++;
			}
			else
			{
				str.push_back('(');
				cnt2++;
			}
			if (cnt1 > cnt2)
			{
				flag = false;
				break;
			}
		}
		if (flag == true && cnt1 == cnt2)
			cout << str << endl;
	}
	return (0);
}
