#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
using Graph = vector< vector<int> >;
vector<bool> seen;

int	main()
{
	ll	N, P, Q;
	cin >> N >> P >> Q;
	vector<int>	A(N);
	rep(i, N)
		cin >> A[i];
	ll	cnt = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				for (int l = k + 1; l < N; l++)
				{
					for (int m = l + 1; m < N; m++)
					{
						if ((A[i] % P * A[j] % P * A[k] % P * A[l] % P * A[m] % P) % P == Q)
							cnt++;
					}
				}
			}
		}
	}
	cout << cnt << endl;
}
