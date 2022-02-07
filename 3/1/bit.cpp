#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
using Graph = vector< vector<int> >;
vector<bool> seen;

int	main()
{
	int	n; cin >> n;
	for (int bit = 0; bit < (1<<n); bit++)
	{
		//for (int i = 0; i < n; i++)
		for (int i = n - 1; i >= 0; i--)
		{
			if (bit & (1 << i))
				cout << "1";
			else
				cout << "0";
		}
		cout << endl;
	}
}
