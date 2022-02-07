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

ll	bin_power(ll a, ll b)
{
	ll	ans = 1;
	while (b != 0)
	{
		if (b % 2 == 1)
			ans = ans * a % mod9;
		a = a * a % mod9;
		b /= 2;
	}
	return (ans);
}

int	main()
{
	ll	N, K; cin >> N >> K;
	ll	ans = 1;
	if (N == 1)
		ans = K;
	else if (N == 2)
	{
		ans = (K % mod9) * ((K - 1) % mod9);
	}
	else
	{
		ans *= K % mod9;
		ans *= (K - 1) % mod9;
		ans = (ans % mod9 * bin_power(K - 2, N - 2) % mod9) % mod9;
	}
	cout << ans % mod9 << endl;
	return (0);
}
