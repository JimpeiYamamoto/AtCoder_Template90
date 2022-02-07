#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
using Graph = vector< vector<int> >;
vector<bool> seen;

int	main()
{
	int	N; cin >> N;
	vector<int>	A(N), B(N);
	rep(i, N)
		cin >> A[i];
	rep(i, N)
		cin >> B[i];
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	ll	sum = 0;
	rep(i, N)
		sum += abs(A[i] - B[i]);
	cout << sum << endl;
	return (0);
}
