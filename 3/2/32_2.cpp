#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
using Graph = vector< vector<int> >;
vector<bool> seen;
long double	PI = 3.14159265358979;
long long	POW18 = 1000000000000000000LL;
long long	mod9 = 1000000007;

int	main()
{
	int	N; cin >>N;
	vector< vector<int> >	A(N, vector<int>(N, 0));
	rep(i, N)
	{
		rep(j, N)
			cin  >> A[i][j];
	}
	int	M; cin >> M;
	vector< vector<bool> >	rl(N, vector<bool>(N, false));
	rep(i, M)
	{
		int	x, y; cin >> x >> y;
		rl[x - 1][y - 1] = true;
		rl[y - 1][x - 1] = true;
	}
	vector<int>	vec;
	rep(i, N)
		vec.push_back(i);
	ull	ans = 100000;
	do
	{
		ull	tmp = 0;
		bool	flag = true;
		rep(i, N)
		{
			tmp += A[vec[i]][i];
			if (i < N - 1 && rl[vec[i]][vec[i + 1]] == true)
				flag = false;
		}
		if (flag == true)
			ans = min(ans, tmp);
	} while (next_permutation(vec.begin(), vec.end()));
	if (ans == 100000)
		cout << -1 << endl;
	else
		cout << ans << endl;
	return (0);
}
