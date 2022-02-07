#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
typedef unsigned long long ull;
using Graph = vector< vector<int> >;
vector<bool> seen;

int	main()
{
	ull	N, A, B, C;
	cin >> N;
	cin >> A >> B >> C;
	ull	ans = 9999;
	for (ull x = 0; x <= 9999; x++)
	{
		for (ull y = 0; x + y <= 9999; y++)
		{
			if ((N - A * x - B * y) % C)
				continue;
			ll	z = (N - A * x - B * y) / C;
			ans =  min(ans, x + y + z);
		}
	}
	cout << ans << endl;
	return (0);
}
