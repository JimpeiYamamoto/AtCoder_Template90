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
	ll	N, L; cin >> N >> L;
	ll	K; cin >> K;
	vector<ll>	A(N), B(N + 1);
	rep(i, N)
		cin >> A[i];
	B[0] = A[0];
	for (ll i = 1; i < N; i++)
		B[i] = A[i] - A[i - 1];
	B[N] = L - A[N - 1];
	ll	left = -1;
	ll	right = L + 1;
	while (right - left > 1)
	{
		ll	mid = left + (right - left) / 2;
		ll	cnt = 0;
		ll	tmp = 0;
		rep(i, N + 1)
		{
			tmp += B[i];
			if (tmp >= mid)
			{
				tmp = 0;
				cnt++;
			}
		}
		if (cnt < K + 1)
			right = mid;
		else
			left = mid;
	}
	cout << left << endl;
	return (0);
}
