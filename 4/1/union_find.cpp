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

struct	UnionFind
{
	vector<int> p;

	UnifonFind(int n)
	{
		p.resize(n, -1);
	}

	int	find(int x)
	{
		if (p[x] == -1)
			return (x);
		else
			return (find(p[x]));
	}

	void	unite(int x, int y)
	{
		x = find(x);
		y = find(y);
		if (x == y)
			return ;
		p[x] = y;
	}
};

int	main()
{
	ll	n, q;
	cin >> n >> q;
	UnionFind uf(n);
	for (int i = 0; i < q; i++)
	{
		int	com, x, y;
		cin >> com >> x >> y;
		if (com == 0)
			uf.unite(x, y);
		else
		{
			if (uf.find(x) == uf.find(y))
				cout << 1 << endl;
			else
				cout << 0 << endl;
				
		}
	}
	return (0);
}
