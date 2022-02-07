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
	vector<int>	A(N), B(N);
	rep(i, N)
		cin >> A[i];
	rep(i, N)
		cin >> B[i];
	ull	ans = 0;
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	rep(i, N)
		ans += abs(A[i] - B[i]);
	cout << ans << endl;
	return (0);
}
