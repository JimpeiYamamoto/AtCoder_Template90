#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
using Graph = vector< vector<int> >;
vector<bool> seen;

int	main()
{
	int	N;
	cin >> N;
	map<string, int>	mp;
	rep(i, N)
	{
		string	S;
		cin >> S;
		mp[S]++;
		if (mp[S] == 1)
			cout << i + 1 << endl;
	}
}
