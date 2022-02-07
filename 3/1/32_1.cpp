#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
typedef unsigned long long ull;
using Graph = vector< vector<int> >;
vector<bool> seen;
long double PI = 3.14159265358979;

int	main()
{
	int	N; cin >> N;
	vector< vector<int> >	A(N + 1, vector<int>(N + 1));
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
			cin >> A[i][j];
	}
	int	M; cin >> M;
	vector<int>	X(M + 1), Y(M + 1);
	for (int i = 1; i <= M; i++)
		cin >> X[i] >> Y[i];
	vector< vector<bool> >	rl(N + 1, vector<bool>(N + 1, false));
	for (int i = 1; i <= M; i++)
	{
		rl[X[i]][Y[i]] = true;
		rl[Y[i]][X[i]] = true;
	}
	vector<int>	vec;
	for (int i = 1; i <= N; i++)
		vec.push_back(i);
	ll		ans = 100000000;
	do
	{
		bool	flag = true;
		for (int i = 0; i < N - 1; i++)
		{
			if (rl[vec[i]][vec[i + 1]] == true)
				flag = false;
		}
		ll	tmp = 0;
		rep(j, N)
			tmp += A[vec[j]][j + 1];
		if (flag == true)
			ans = min(ans, tmp);
	} while (next_permutation(vec.begin(), vec.end()));
	if (ans == 100000000)
		cout << -1 << endl;
	else
		cout << ans << endl;
	return (0);
}
