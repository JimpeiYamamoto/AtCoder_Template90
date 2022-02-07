#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
using Graph = vector< vector<int> >;
vector<bool> seen;

int	main()
{
	int	Q; cin >> Q;
	deque<int>	dq;
	rep(i, Q)
	{
		int	t; cin >> t;
		int	x; cin >> x;
		if (t == 1)
			dq.push_front(x);
		else if (t == 2)
			dq.push_back(x);
		else
		{
			cout << dq[x - 1] << endl;
		}
	}
}
