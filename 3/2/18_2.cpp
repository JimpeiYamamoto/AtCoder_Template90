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
	ld	T, L, X, Y, Q;
	cin >> T >> L >> X >> Y >> Q;
	rep(i, (ll)Q)
	{
		lld	E;
		cin >> E;
		ld	x = 0.0;
		ld	y = -1.0 * L * sin(E / T * PI * 2.0) / 2.0;
		ld	z = L / 2.0 - L * cos(E / T * PI * 2.0) / 2.0;
		ld	xx = sqrt(X * X + (Y - y) * (Y - y));
		ld	yy = z;
		printf("%.10Lf\n", atan2(yy, xx) * 180.0 / PI);
	}
	return (0);
}
