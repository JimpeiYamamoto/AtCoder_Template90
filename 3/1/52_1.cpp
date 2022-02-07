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
	ull	ans = 1;
	rep(i, N)
	{
		ull	tmp = 0;
		rep(j, 6)
		{
			ull	num; cin >> num;
			tmp += num;
		}
		tmp %= mod9;
		ans = (ans % mod9) * tmp;
		ans %= mod9;
	}
	cout << ans << endl;
	return (0);
}
