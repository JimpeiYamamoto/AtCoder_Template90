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
	vector<	vector<int> >	g(H, vector<int>(W));
	rep(i, H)
	{
		rep(j, W)
			cin >> g[i][j];
	}
	vector<int>	tate(W), yoko(H);
	rep(i, W)
	{
		int	sum = 0;
		rep(j, H)
			sum += g[j][i];
		tate[i] = sum;
	}
	rep(i, H)
	{
		int	sum = 0;
		rep(j, W)
			sum += g[i][j];
		yoko[i] = sum;
	}
	rep(i, H)
	{
		rep(j, W)
			cout << tate[j] + yoko[i] - g[i][j] << " ";
		cout << endl;
	}
}
