#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
typedef unsigned long long ull;
using Graph = vector< vector<int> >;
vector<bool> seen;
long double	PI = 3.14159265358979;
long long	POW18 = 1000000000000000000LL;
long long	mod9 = 1000000007;

vector<int>	buf;
vector< vector<int> >	A;


void dfs(int i, const int size, const int range_start, const int range_end)
{
	if (i == size)
	{
		for (int i = 0; i < buf.size(); i++)
		{
			cout << buf[i] << " ";
		}
		cout << endl;
	}
	else
	{
		for (int j = range_start; j <= range_end; j++)
		{
			buf[i] = j;
			dfs(i + 1, size, range_start, range_end);
		}
	}
}

int	main()
{
	int	N; cin >> N;
	rep(i, N)
	{
		rep(j, 6)
		{
			ull	num;
			cin >> num;
			A.push_back(i);
			A[i].push_back(num);
		}
	}
	int	size = N;
	dfs(0, size, 0, 5);
	return (0);
}
