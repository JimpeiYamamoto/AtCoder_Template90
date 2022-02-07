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
	ll	N; cin >> N;
	vector<ll>	A(N);
	rep(i, N)
		cin >> A[i];
	vector<ll>	S(2 * N, 0);
	for (ll i = 0; i < (2 * N); i++)
		S[i + 1] = S[i] + A[i % N];
	if (S[N] % 10 != 0)
	{
		cout << "No" << endl;
		return (0);
	}
	ll	ans = S[N] / 10;
	rep(i, 2 * N)
	{
		ll	R = S[i];
		if (binary_search(S.begin(), S.end(), R + ans) == true)
		{
			cout << "Yes" << endl;
			return (0);
		}
	}
	cout << "No" << endl;
	return (0);
}
