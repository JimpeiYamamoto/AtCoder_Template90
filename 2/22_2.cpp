#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
using Graph = vector< vector<int> >;
vector<bool> seen;

ll	gcd(ll A, ll B)
{
	if (A % B == 0)
		return (B);
	else
		return (gcd(B, A % B));
}

int	main()
{
	ll	A, B, C;
	cin >> A >> B >> C;
	ll	x = gcd(A, gcd(B, C));
	cout << (A + B + C) / x - 3 << endl;
}
