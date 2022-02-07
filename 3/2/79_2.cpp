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
	ll	H, W; cin >> H >> W;
	vector< vector<ll> >	A(H, vector<ll>(W));
	rep(i, H)
	{
		rep(j, W)
			cin >> A[i][j];
	}
	vector< vector<ll> >	B(H, vector<ll>(W));
	ll	ans = 0;
	rep(i, H)
	{
		rep(j, W)
			cin >> B[i][j];
	}
	rep(x, H - 1)
	{
		rep(y, W - 1)
		{
			ll	diff = B[x][y] - A[x][y];
			A[x][y] += diff;
			A[x + 1][y] += diff;
			A[x][y + 1] += diff;
			A[x + 1][y + 1] += diff;
			ans += abs(diff);
		}
	}
	bool	flag = true;
	rep(i, H)
	{
		if (A[i][W - 1] != B[i][W - 1])
			flag = false;
	}
	rep(i, W)
	{
		if (A[H - 1][i] != B[H - 1][i])
			flag = false;
	}
	if (flag == false)
		cout << "No" << endl;
	else
	{
		cout << "Yes" << endl;
		cout << ans << endl;
	}
	return (0);
}
