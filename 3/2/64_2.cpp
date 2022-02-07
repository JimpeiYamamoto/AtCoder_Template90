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
	ll	N, Q;
	cin >> N >> Q;
	vector<ll>	A(N);
	rep(i, N)
		cin >> A[i];
	ll	ans = 0;
	vector<ll>	B(N);
	rep(i, N - 1)
	{
		ll	tmp = abs(A[i] - A[i + 1]);
		B[i] = A[i + 1] - A[i];
		ans += tmp;
	}
	rep(i, Q)
	{
		ll	L, R, V;
		cin >> L >> R >> V;
		L--;
		R--;
		ll	before = 0;
		ll	after = 0;
		if (L != 0)
		{
			before += abs(B[L - 1]);
			B[L - 1] += V;
			after += abs(B[L - 1]);
		}
		if (R != N - 1)
		{
			before += abs(B[R]);
			B[R] -= V;
			after += abs(B[R]);
		}
		ans += after - before;
		cout << ans << endl;
	}
	return (0);
}
