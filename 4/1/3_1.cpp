#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, N) for (ll i = 0; i < N; i++)
typedef unsigned long long ull;
typedef long double ld;
using Graph = vector< vector<int> >;
vector<bool> seen;
long double	PI = 3.14159265358979;
long long	POW18 = 1000000000000000000LL;
long long	mod9 = 1000000007;

int	main()
{
	int	N; cin >> N;
	Graph	G(N + 1);
	rep(i, N - 1)
	{
		int	A, B;
		cin >> A >> B;
		G[A - 1].push_back(B - 1);
		G[B - 1].push_back(A - 1);
	}
	//出発点を1としてBFSを使用
	vector<int>	dist(N, -1);
	queue<int>	que;
	dist[0] = 0;
	que.push(0);
	while (!que.empty())
	{
		int	v = que.front();
		que.pop();
		for (auto nv : G[v])
		{
			if (dist[nv] != -1)
				continue;
			dist[nv] = dist[v] + 1;
			que.push(nv);
		}
	}
	int	max_d = -1;
	int	max_n = -1;
	rep(i, N)
	{
		if (max_d < dist[i])
		{
			max_d = dist[i];
			max_n = i;
		}
	}
	vector<int>	dist2(N, -1);
	queue<int>	que2;
	dist2[max_n] = 0;
	que2.push(max_n);
	while (!que2.empty())
	{
		int	v = que2.front();
		que2.pop();
		for (auto nv : G[v])
		{
			if (dist2[nv] != -1)
				continue;
			dist2[nv] = dist2[v] + 1;
			que2.push(nv);
		}
	}
	max_d = -1;
	max_n = -1;
	rep(i, N)
	{
		if (max_d < dist2[i])
		{
			max_d = dist2[i];
			max_n = i;
		}
	}
	cout << max_d + 1 << endl;
}
