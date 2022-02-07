#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
using Graph = vector< vector<int> >;
vector<bool> seen;

int	main()
{
	int	N, M;
	cin >> N >> M;
	Graph	G(N);
	rep(i, M)
	{
		int	a, b;
		cin >> a >> b;
		a--;
		b--;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	int	ans = 0;
	for (int i = 0; i < N; i++)
	{
		int	cnt = 0;
		for (int j : G[i])
		{
			if (i > j)
				cnt++;
		}
		if (cnt == 1)
			ans++;
	}
	cout << ans << endl;
}
