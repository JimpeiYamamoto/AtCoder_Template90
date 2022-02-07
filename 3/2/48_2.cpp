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
	ll	N, K; cin >> N >> K;
	vector<ll>	vec;
	rep(i, N)
	{
		ll	a, b;
		cin >> a >> b;
		vec.push_back(b);
		vec.push_back(a - b);
	}
	sort(vec.begin(), vec.end());
	reverse(vec.begin(), vec.end());
	ll	ans = 0;
	rep(i, K)
		ans += vec[i];
	cout << ans << endl;
	return (0);
}
