#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;

int	main()
{
	int	H, W;
	cin >> H >> W;
	vector< vector<int> >	A(H, vector<int>(W));
	rep(i, H)
	{
		rep(j, W)
			cin >> A[i][j];
	}
	vector<int>	VI(H), HO(W);
	ll	sum = 0;
	rep(i, H)
	{
		sum = 0;
		rep(j, W)
			sum += A[i][j];
		VI[i] = sum;
	}
	rep(i, W)
	{
		sum = 0;
		rep(j, H)
			sum += A[j][i];
		HO[i] = sum;
	}
	rep(i, H)
	{
		rep(j, W)
		{
			cout << HO[j] + VI[i] - A[i][j];
			if (j < W - 1)
				cout << " ";
		}
		cout << endl;
	}
}
