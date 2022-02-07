#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
using Graph = vector< vector<int> >;
vector<bool> seen;

int	main()
{
	ll	N, K;
	cin >> N >> K;
	ll	sum = 0;
	vector<int>	a(N), b(N);
	rep(i, N)
		cin >> a[i];
	rep(i, N)
		cin >> b[i];
	rep(i, N)
		sum += abs(a[i] - b[i]);
	ll	num = K - sum;
	if (num >= 0 && num % 2 == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
