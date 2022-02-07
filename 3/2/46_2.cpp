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
	int	N; cin >> N;
	vector<ll>	A(47, 0), B(47, 0), C(47, 0);
	rep(i, N)
	{
		ll	a; cin >> a;
		A[a % 46]++;
	}
	rep(i, N)
	{
		ll	b; cin >> b;
		B[b % 46]++;
	}
	rep(i, N)
	{
		ll	c; cin >> c;
		C[c % 46]++;
	}
	ull	ans = 0;
	rep(i, 47)
	{
		rep(j, 47)
		{
			rep(k, 47)
			{
				if ((i + j + k) % 46 == 0)
					ans += A[i] * B[j] * C[k];
			}
		}
	}
	cout << ans << endl;
	return (0);
}
