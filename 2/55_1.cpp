#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;

int	main()
{
	int	N, P, Q;
	cin >> N >> P >> Q;
	vector<ll>	A(N);
	rep(i, N)
		cin >> A[i];
	ll	ans = 0;
	rep(i, N)
	{
		rep(j, i)
		{
			rep(k, j)
			{
				rep(l, k)
				{
					rep(m, l)
					{
						if (A[i] * A[j] % P * A[k] % P * A[l] % P * A[m] % P == Q)
							ans++;
					}
				}
			}
		}
	}
	cout << ans << endl;
}
