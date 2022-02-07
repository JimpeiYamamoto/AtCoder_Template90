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
	ull	a, b, c;
	cin >> a >> b >> c;
	ull	bc = c;
	while (--b)
		bc *= c;
	if (a < bc)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
