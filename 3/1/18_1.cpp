#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
typedef unsigned long long ull;
using Graph = vector< vector<int> >;
vector<bool> seen;
long double PI = 3.14159265358979;

int	main()
{
	long double	T; cin >> T;
	long double	L, X, Y; cin >> L >> X >> Y;
	long double	Q; cin >> Q;
	long double	E;
	rep(i, Q)
	{
		cin >> E;
		long double	cx, cy, cz;
		cx = 0.0;
		cy = -(L / 2.0) * sin(E / T * 2.0 * PI);
		cz = (L / 2.0) - (L / 2.0) * cos(E / T * 2.0 * PI);
		long double	d1 = sqrt((cx - X) * (cx - X) + (cy - Y) * (cy - Y));
		long double	ans = atan2(cz, d1) * 180.0L / PI;
		printf("%.10Lf\n", ans);
	}
	return (0);
}
