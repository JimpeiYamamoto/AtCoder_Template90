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

ll	gcd(ll a, ll b)
{
	if (a % b == 0)
		return (b);
	else
		return (gcd(b, a%b));
}

int	main()
{
	ull	A, B; cin >> A >> B;
	ll	tmp = gcd(A, B);
	ll	tmp2 = B / tmp;
	ll	tmp3 = POW18 / A;
	if (tmp2 > tmp3)
		cout << "Large" << endl;
	else
		cout << tmp2 * A << endl;
	return (0);
}
