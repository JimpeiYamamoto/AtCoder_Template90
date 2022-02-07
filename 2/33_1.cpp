#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;

int	main()
{
	int	H, W;
	cin >> H >> W;
	vector< vector<int> >	dp(H + 1, vector<int>(W + 1, 0));
	rep(i, H + 1)
		dp[i][0] = 0;
	ll	ans = 0;
	if (H == 1 || W == 1)
	{
		ans = H * W;
	}
	else
	{
		for (int i = 1; i < H + 1; i++)
		{
			for (int j = 1; j < W + 1; j++)
			{
				if (!dp[i - 1][j - 1] && !dp[i - 1][j] && !dp[i][j - 1])
				{
					dp[i][j] = 1;
					ans++;
				}
				else
				{
					dp[i][j] = 0;
				}
			}
		}
	}
	cout << ans << endl;
}
