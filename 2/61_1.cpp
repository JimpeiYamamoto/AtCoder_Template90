#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;

int	main()
{
	int	Q;
	cin >> Q;
	deque<int>	d;
	int	t, x;
	rep(i, Q)
	{
		cin >> t;
		cin >> x;
		if (t == 1)
		{
			d.push_front(x);
		}
		else if (t == 2)
		{
			d.push_back(x);
		}
		else
		{
			cout << d[x - 1] << endl;
		}
	}
}
