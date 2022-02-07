#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;

int	main()
{
	int	N;
	cin >> N;
	vector<int>	o_sum(N + 1, 0), t_sum(N + 1, 0);
	int	o_num, t_num;
	rep(i, N)
	{
		int	num, score;
		cin >> num >> score;
		if (num == 1)
		{
			o_sum[i + 1] = o_sum[i] + score;
			t_sum[i + 1] = t_sum[i];
		}
		else
		{
			o_sum[i + 1] = o_sum[i];
			t_sum[i + 1] = t_sum[i] + score;
		}
	}
	int	Q;
	cin >> Q;
	rep(i, Q)
	{
		int	l, r;
		cin >> l >> r;
		cout << o_sum[r] - o_sum[l - 1] << " " << t_sum[r] - t_sum[l - 1] << endl;
	}
}

