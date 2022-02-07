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
	ll	N_cpy = N;
	vector<ll>	p;
	for (ll i = 2; i * i <= N; i++)
	{
		while (N % i == 0)
		{
			N /= i;
			p.push_back(i);
		}
	}
	if (N != 1)
		p.push_back(N);
	if (N == N_cpy)
	{
		cout << 0 << endl;
		return (0);
	}
	ll	size = p.size();
	ll	ans = 0;
	ll	index = 1;
	while (size > index)
	{
		index *= 2;
		ans++;
	}
	cout << ans << endl;
	return (0);
}
