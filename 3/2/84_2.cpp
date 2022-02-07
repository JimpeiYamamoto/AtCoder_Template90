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
	ull	all = (N + 1) * N / 2;
	string	str; cin >> str;
	vector<ll>	vec(N, 0);
	ll		index = 0;
	char	c = str[index];
	vec[0] = 1;
	for (ll i = 1; i < N; i++)
	{
		if (c != str[i])
			index++;
		vec[index]++;
		c = str[i];
	}
	rep(i, index + 1)
		all -= vec[i] * (vec[i] + 1) / 2;
	cout << all << endl;
	return (0);
}
