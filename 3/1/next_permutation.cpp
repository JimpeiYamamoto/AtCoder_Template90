#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
typedef unsigned long long ull;
using Graph = vector< vector<int> >;
vector<bool> seen;
long double PI = 3.14159265358979;

int	main()
{
	int	len = 4;
	vector<int>	vec(len);
	rep(i, len)
		vec[i] = i;
	do
	{
		rep(i, len)
			cout << " " << vec[i];
		cout << endl;
	} while (next_permutation(vec.begin(), vec.end()));
	return (0);
}
