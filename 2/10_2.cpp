#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
using Graph = vector< vector<int> >;
vector<bool> seen;

int	main()
{
	int	N;
	cin >> N;
	vector<int>	sum1(N + 1, 0), sum2(N + 1, 0);
	rep(i, N)
	{
		int	c, p;
		cin >> c >> p;
		if (c == 1)
		{
			sum1[i + 1] = sum1[i] + p;
			sum2[i + 1] = sum2[i];
		}
		else
		{
			sum1[i + 1] = sum1[i];
			sum2[i + 1] = sum2[i] + p;
		}
	}
	int	Q;
	cin >> Q;
	rep(i, Q)
	{
		int	l, r;
		cin >> l >> r;
		cout << sum1[r] - sum1[l - 1] << " " << sum2[r] - sum2[l - 1] << endl;
	}
}
