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
	int	N, Q; cin >> N >> Q;
	vector<ll>	A(N), L(Q), R(Q), V(Q);
	rep(i, N)
		cin >> A[i];
	rep(i, Q)
	{
		ll	l, r, v; cin >> l >> r >> v;
		L[i] = l - 1;
		R[i] = r - 1;
		V[i] = v;
	}
	ll	ans = 0;
	vector<ll>	B(N);
	rep(i, N - 1)
	{
		B[i] = A[i + 1] - A[i];
		ans += abs(B[i]);
	}
	rep(i, Q)
	{
		cout << L[i] - 1 << endl;
		cout << B[L[i] - 1] << endl;
		ll	before = 0;
		if (L[i] - 1 < 0)
			before = abs(B[R[i]]);
		else
			before = abs(B[L[i] - 1]) + abs(B[R[i]]);
		if (L[i] > 0)
			B[L[i] - 1] += V[i];
		if (R[i] < N - 1)
			B[R[i]] -= V[i];
		ll	after = abs(B[L[i] - 1]) + abs(B[R[i]]);
		ans += (after - before);
		cout << ans << endl;
	}
	return (0);
}
