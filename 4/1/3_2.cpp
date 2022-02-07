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
	Graph	g(N + 1);
	rep(i, N - 1)
	{
		ll	a, b; cin >> a >> b;
		g[a - 1].push_back(b - 1);
		g[b - 1].push_back(a - 1);
	}
	vector<ll>	dist(N, -1);
	queue<ll>	que;
	dist[0] = 0;
	que.push(0);
	while (!que.empty())
	{
		ll	v = que.front();
		que.pop();
		for (ll nv : g[v])
		{
			if (dist[nv] != -1)
				continue;
			dist[nv] = dist[v] + 1;
			que.push(nv);
		}
	}
	ll	max_d = -1;
	ll	max_n = -1;
	rep(i, N)
	{
		if (max_d < dist[i])
		{
			max_d = dist[i];
			max_n = i;
		}
	}
	vector<ll>	dist2(N, -1);
	queue<ll>	que2;
	dist2[max_n] = 0;
	que2.push(max_n);
	while (!que2.empty())
	{
		ll	v = que2.front();
		que2.pop();
		for (ll nv : g[v])
		{
			if (dist2[nv] != -1)
				continue;
			dist2[nv] = dist2[v] + 1;
			que2.push(nv);
		}
	}
	max_n = -1;
	rep(i, N)
		max_n = max(max_n, dist2[i]);
	cout << max_n + 1 << endl;
	return (0);
}
