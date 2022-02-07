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
	ll	H, W;
	cin >> H >> W;
	vector< vector<ll> >	A(H, vector<ll>(W));
	vector< vector<ll> >	B(H, vector<ll>(W));
	rep(i, H)
	{
		rep(j, W)
			cin >> A[i][j];
	}
	rep(i, H)
	{
		rep(j, W)
			cin >> B[i][j];
	}
	ll	cnt = 0;
	for (int x = 0; x < H - 1; x++)
	rep(x, H - 1)
	{
		rep(y, W - 1)
		{
			ll	diff = B[x][y] - A[x][y];
			A[x][y] += diff;
			A[x][y + 1] += diff;
			A[x + 1][y] += diff;
			A[x + 1][y + 1] += diff;
			cnt += abs(diff);
		}
	}
	if (A == B)
	{
		cout << "Yes" << endl;
		cout << cnt << endl;
	}
	else
		cout << "No" << endl;
	return (0);
}
