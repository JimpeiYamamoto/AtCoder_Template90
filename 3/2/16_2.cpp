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
	ll	N, A, B, C;
	cin >> N >> A >> B >> C;
	ll	ans = 10000;
	rep(x, 10000)
	{
		rep(y, 10000)
		{
			ll	tmp_sum = A * x + B * y;
			if (N - tmp_sum < 0 || (N - tmp_sum) % C != 0)
				continue;
			ans = min(ans, x + y + (N - tmp_sum) / C);
		}
	}
	cout << ans << endl;
	return (0);
}
