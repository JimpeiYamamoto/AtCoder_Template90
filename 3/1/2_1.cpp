#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
using Graph = vector< vector<int> >;
vector<bool> seen;

bool	judge(string S)
{
	int	size;
	int	cnt1 = 0;
	int	cnt2 = 0;

	size = S.size();
	rep(i, size)
	{
		if (S[i] == '(')
			cnt1++;
		else
			cnt2++;
		if (cnt1 - cnt2 < 0)
			return (false);
		if (cnt1 > (size / 2))
			return (false);
	}
	return (true);
}

int		main()
{
	int	N; cin >> N;
	for (int bit = 0; bit < (1 << N); bit++)
	{
		string output = "";
		//for (int i = 0; i < N; i++)
		for (int i = N - 1; i >= 0; i--)
		{
			if (bit & (1 << i))
				output.push_back(')');
			else
				output.push_back('(');
		}
		if (judge(output) == true)
			cout << output << endl;
	}
	return (0);
}
