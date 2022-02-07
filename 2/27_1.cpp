#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;

int	main()
{
	int	N;
	cin >> N;
	map<string, int>	mp;
	rep(i, N)
	{
		string s;
		cin >> s;
		mp[s]++;
		if (mp[s] == 1)
			cout << i + 1 << endl;
	}
}
