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

class UnionFind
{
	public:
		vector<ll>	par;

		void	init(ll	sz)
		{
			par.resize(sz, -1);
		}

		ll		root(int pos)
		{
			if (par[pos] == -1)
				return (pos);
			par[pos] = root(par[pos]);
			return (par[pos]);
		}

		void	unite(ll u, ll v)
		{
			u = root(u);
			v = root(v);
			if (u == v)
				return;
			par[u] = v;
		}

		bool	same(ll u, ll v)
		{
			if (root(u) == root(v))
				return (true);
			return (false);
		}
};

ll 	H, W, Q;
UnionFind	UF;
bool	used[2009][2009];

void	query1(ll px, ll py)
{
	ll	dx[4] = {-1, 0, 1, 0};
	ll	dy[4] = {0, 1, 0, -1};
	for (ll i = 0; i < 4; i++)
	{
		ll	sx = px + dx[i];
		ll	sy = py + dy[i];
		if (used[sx][sy] == false)
			continue;
		ll	hash1 = (px - 1) * W + (py - 1);
		ll	hash2 = (py - 1) * W + (py - 1);
		UF.unite(hash1, hash2);
	}
	used[px][py] = true;
}

bool	query2(ll px, ll py, ll qx, ll qy)
{
	if (used[px][py] == false || used[qx][qy] == false)
		return (false);
	ll	hash1 = (px - 1) * W + (py - 1);
	ll	hash2 = (py - 1) * W + (py - 1);
	if (UF.same(hash1, hash2) == true)
		return (true);
	else
		return (false);
}

int	main()
{
	cin >> H >> W >> Q;
	UF.init(H * W);
	rep(i, Q)
	{
		ll	ty; cin >> ty;
		if (ty == 1)
		{
			ll	x, y;
			cin >> x >> y;
			query1(x, y);
		}
		else
		{
			ll	xa, xb, ya, yb;
			cin >> xa >> ya >> xb >> yb;
			bool	ans = query2(xa, ya, xb, yb);
			if (ans == true)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
	}
	return (0);
}
