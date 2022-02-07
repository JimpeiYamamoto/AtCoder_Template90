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
	ll	N; cin >> N;
	vector<ll>	vec(N, 0);
	char	c = 'a';
	ll	j = -1;
	rep(i, N)
	{
		char	cc; cin >> cc;
		if (c != cc)
			j++;
		vec[j]++;
		c = cc;
	}
	ull	ans = (N + 1) * N / 2;
	rep(i, j + 1)
		ans -= (vec[i] + 1) * (vec[i]) / 2;
	cout << ans << endl;
	return (0);
}
