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
	ll	N; cin >> N;
	ll	ans = 1;
	rep(i, N)
	{
		ll	tmp_sum = 0;
		rep(j, 6)
		{
			ll	tmp; cin >> tmp;
			tmp_sum += tmp;
		}
		ans = ((ans % mod9) * tmp_sum) % mod9;
	}
	cout << ans << endl;
	return (0);
}
