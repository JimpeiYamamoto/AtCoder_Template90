#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
using Graph = vector< vector<int> >;
vector<bool> seen;

int	main()
{
	int	H, W;
	cin >> H >> W;
	if (H == 1 || W == 1)
		cout << H * W << endl;
	else
	{
		int	H_mod = H % 2;
		int	W_mod = W % 2;
		cout << (H / 2 + H_mod) * (W / 2 + W_mod) << endl;
	}
}
