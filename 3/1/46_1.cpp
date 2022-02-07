#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
typedef unsigned long long ull;
using Graph = vector< vector<int> >;
vector<bool> seen;
long double	PI = 3.14159265358979;
long long	POW18 = 1000000000000000000LL;

int	main()
{
	int	N;
	cin >> N;
	map<ull, ull>	a_mp, b_mp, c_mp;
	rep(i, N)
	{
		ull	a; cin >> a;
		a_mp[a % 46]++;
	}
	rep(i, N)
	{
		ull	b; cin >> b;
		b_mp[b % 46]++;
	}
	rep(i, N)
	{
		ull	c; cin >> c;
		c_mp[c % 46]++;
	}
	ull	cnt = 0;
	for (int i = 0; i <= 46; i++)
	{
		for (int j = 0; j <= 46; j++)
		{
			for (int k = 0; k <= 46; k++)
			{
				if ((i + j + k) % 46 == 0)
				{
					cnt += a_mp[i] * b_mp[j] * c_mp[k];
				}
			}
		}
	}
	cout << cnt << endl;
	return (0);
}
