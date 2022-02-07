#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
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
		b  /= 2;
	}
	return (ans);
}

int	main()
{
	ull	N; cin >>N;
	ll	K; cin >> K;

	if (K == 1)
	{
		if (N == 1)
			cout << 1 << endl;
		else
			cout << 0 << endl;
		return (0);
	}
	if (N == 1)
		cout << K << endl;
	else if (N == 2)
		cout << K * (K - 1) << endl;
	else if (K == 2)
		cout << 0 << endl;
	else
	{
		ll	ans = (K * (K - 1)) % mod9;
		ans *= bin_power(K - 2, N - 2) % mod9;
		cout << ans % mod9 << endl;
	}
	return (0);
}
