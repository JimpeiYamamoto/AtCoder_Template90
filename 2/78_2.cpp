#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
using Graph = vector< vector<int> >;
vector<bool> seen;

int	main()
{
	ll	N, M; cin >> N >> M;
	Graph	G(N + 1);
	rep(i, M)
	{
		ll	a, b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	ll	ans = 0;
	for (ll i = 1; i < N + 1; i++)
	{
		ll	cnt = 0;
		for (ll tmp : G[i])
		{
			if (i > tmp)
				cnt++;
		}
		if (cnt == 1)
			ans++;
	}
	cout << ans << endl;
}
