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

ull	get_digit(ull num)
{
	ull	digit = 0;
	while (num > 0)
	{
		num /= 10;
		digit++;
	}
	return (digit);
}

int	main()
{
	ull	L, R; cin >> L >> R;

	ull	l_d = get_digit(L);
	ull	l_d_cpy = l_d;
	if (L % 10 == 0)
		l_d--;
	map<ull, ull>	mp;
	for (ull l = L; l <= R; l++)
	{
		if (l % 10 == 0)
			l_d++;
		mp[l_d]++;
	}
	ull	ans = 0;
	ull	r = L;
	ull	l = L;
	while (mp[l_d_cpy] != 0)
	{
		r += mp[l_d_cpy];
		ull	r_sum = (r - 1) % mod9 * (r) % mod9 / 2 * l_d_cpy % mod9;
		ull	l_sum =  (l - 1)  % mod9 * l  % mod9 / 2 * l_d_cpy % mod9;
		l = r;
		ans += (r_sum - l_sum) % mod9;
		l_d_cpy++;
	}
	cout << ans << endl;
	return (0);
}
