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
	vector<ll>	p;
	ll	N_cpy = N;
	for (ll i = 2; i * i <= N; i++)
	{
		while (N_cpy % i == 0)
		{
			N_cpy /= i;
			p.push_back(i);
		}
	}
	if (N_cpy != 1)
		p.push_back(N_cpy);
	ll	len = p.size();
	ll	tmp = 1;
	ll	ans = 0;
	while (tmp < len)
	{
		tmp *= 2;
		ans++;
	}
	cout << ans << endl;
	return (0);
}
