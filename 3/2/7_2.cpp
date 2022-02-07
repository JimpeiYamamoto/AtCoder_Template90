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
	ll	N; cin >> N;
	vector<ll>	A(N);
	rep(i, N)
		cin >> A[i];
	sort(A.begin(), A.end());
	ll	Q; cin >> Q;
	rep(i, Q)
	{
		ll	B; cin >> B;
		ll	index = lower_bound(A.begin(), A.end(), B) - A.begin();
		if (index == N - 1)
			cout << min(abs(B - A[index - 1]), abs(B - A[index])) << endl;
		else if (index == 0)
			cout << min(abs(B - A[index]), abs(B - A[index + 1])) << endl;
		else
			cout << min(min(abs(B - A[index - 1]), abs(B - A[index])), abs(B - A[index + 1])) << endl;
	}
	return (0);
}
