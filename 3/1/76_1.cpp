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
	int	N; cin >> N;
	vector<int>	A(N);
	ll	sum = 0;
	rep(i, N)
	{
		cin >> A[i];
		sum += A[i];
	}
	if (sum % 10 != 0)
	{
		cout << "No" << endl;
		return (0);
	}
	ll	cut_size = sum / 10;
	vector<ll>	Q(2 * N, 0);
	rep(i, 2 * N)
		Q[i + 1] = Q[i] + A[i % N];
	rep(i, 2 * N)
	{
		ll	L = Q[i];
		if (binary_search(Q.begin(), Q.end(), L + cut_size) == true)
		{
			cout << "Yes" << endl;
			return (0);
		}
	}
	cout << "No" << endl;
	return (0);
}
