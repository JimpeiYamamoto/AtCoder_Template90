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
	int	N, Q; cin >> N >> Q;
	vector<int>	A(N);
	rep(i, N)
		cin >> A[i];
	int	cnt = 0;
	rep(i, Q)
	{
		int	T, x, y; cin >> T >> x >> y;
		x--;
		y--;
		if (T == 1)
		{
			int	x_2 = x - cnt;
			int	y_2 = y - cnt;
			if (x_2 < 0)
				x_2 = N + x - cnt;
			if (y_2 < 0)
				y_2 = N + y - cnt;
			swap(A[x_2], A[y_2]);
		}
		else if (T == 2)
		{
			cnt++;
			if (cnt == N)
				cnt = 0;
		}
		else
		{
			int	x_2 = x - cnt;
			if (x_2 < 0)
				x_2 = N + x - cnt;
			cout << A[x_2] << endl;
		}
	}
	return (0);
}
