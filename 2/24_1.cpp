#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;

int	main()
{
	ll	N, K;
	cin >> N >> K;
	vector<ll>	A(N), B(N);
	rep(i, N)
		cin >> A[i];
	rep(i, N)
		cin >> B[i];
	ll	sum = 0;
	rep(i, N)
		sum += abs(A[i] - B[i]);
	if (sum <= K && ((K - sum) % 2 == 0))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
