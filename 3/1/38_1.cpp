#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
typedef unsigned long long ull;
using Graph = vector< vector<int> >;
vector<bool> seen;
long double	PI = 3.14159265358979;
long long	POW18 = 1000000000000000000LL;

//ll	gcd(ll a, ll b)
//{
//	if (b == 0)
//		return (a);
//	else
//		return (gcd(b, a % b));
//}

ll	gcd(ll a, ll b)
{
	if (a % b == 0)
		return (b);
	else
		return (gcd(b, a%b));
}

int	main()
{
	ll	A, B;
	cin >> A >> B;
	ll	C = A / gcd(A, B);
	if (B <= POW18 / C)
	{
		cout << C * B << endl;
//		cout << A * B / gcd(A, B) << endl;
	}
	else
		cout << "Large" << endl;
}
