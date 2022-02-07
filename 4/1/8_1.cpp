#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, N) for (ll i = 0; i < N; i++)
typedef unsigned long long ull;
typedef long double ld;
using Graph = vector< vector<ll> >;
vector<bool> seen;
long double	PI = 3.14159265358979;
long long	POW18 = 1000000000000000000LL;
long long	mod9 = 1000000007;

int	main()
{
	ll	N; cin >> N;
	string	S; cin >> S;
	string	str = "atcoder";
	vector< vector<ll> >	dp(str.size() + 1, vector<ll>(N + 1, 0));
	rep(i, N + 1)
		dp[0][i] = 1;
	for (ll i = 1; i < str.size() + 1; i++)
	{
		for(ll j = 1; j < N + 1; j++)
		{
			if (str[i - 1] == S[j - 1])
				dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod9;
			else
				dp[i][j] = dp[i][j - 1] % mod9;
		}
	}
	cout << dp[str.size()][N] % mod9 << endl;
	return (0);
}
