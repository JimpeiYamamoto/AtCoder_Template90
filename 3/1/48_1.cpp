#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
typedef unsigned long long ull;
using Graph = vector< vector<int> >;
vector<bool> seen;
long double	PI = 3.14159265358979;
long long	POW18 = 1000000000000000000LL;

int	main()
{
	int	N, K; cin >> N >> K;
	vector<int>	score;
	rep(i, N)
	{
		int	a, b; cin >> a >> b;
		score.push_back(b);
		score.push_back(a - b);
	}
	sort(score.begin(), score.end());
	reverse(score.begin(), score.end());
	ull	ans = 0;
	rep(i, K)
		ans += score[i];
	cout << ans << endl;
	return (0);
}
