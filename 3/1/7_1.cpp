#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
using Graph = vector< vector<int> >;
vector<bool> seen;

int	main()
{
	ll	N; cin >> N;
	vector<ll>	A(N);
	rep(i, N)
		cin >> A[i];
	int	Q; cin >> Q;
	vector<ll>	B(Q);
	rep(i, Q)
		cin >> B[i];
	sort(A.begin(), A.end());
	for (ll b : B)
	{
		int	pos1 = lower_bound(A.begin(), A.end(), b) - A.begin();
		if (pos1 == 0)
			cout << min(abs(A[pos1] - b), abs(A[pos1 + 1] - b)) << endl;
		else if (pos1 == N - 1)
			cout << min(abs(A[pos1] - b), abs(A[pos1 - 1] - b)) << endl;
		else
			cout << min(min(abs(A[pos1] - b), abs(A[pos1 - 1] - b)), abs(A[pos1 + 1] - b)) << endl;
	}
	return (0);
}
