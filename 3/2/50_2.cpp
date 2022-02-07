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

int	main()
{
	ll	N, L;
	cin >> N >> L;
	vector<ll>	dp(N + 1, 1);
	for (int i = 1; i <= N; i++)
	{
		if (i < L)
			dp[i] = dp[i - 1] % mod9;
		else
			dp[i] = ((dp[i - 1]) % mod9 + (dp[i - L]) % mod9) % mod9;
	}
	cout << dp[N] << endl;
	return (0);
}
