#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;

ll	gcd(ll a, ll b)
{
	if (a % b == 0)
		return (b);
	else
		return (gcd(b, a % b));
}

int	main()
{
	ll	A, B, C;
	cin >> A >> B >> C;
	ll	x = gcd(A, gcd(B, C));
	cout << A / x + B / x + C / x - 3 << endl;
}
