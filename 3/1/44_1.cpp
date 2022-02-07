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
	int	N, Q; cin >> N >> Q;
	vector<int>	A(N);
	rep(i, N)
		cin >> A[i];
	int	shift = 0;
	rep(i, Q)
	{
		int	T, x, y;
		cin >> T >> x >> y;
		x--;
		y--;
		if (T == 1)
		{
			swap(A[(x + shift) % N], A[(y + shift) % N]);
		}
		else if (T == 2)
			shift++;
		else
			cout << A[(x + shift) % N] << endl;
	}
	return (0);
}
