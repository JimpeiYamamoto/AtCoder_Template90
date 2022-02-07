#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)
typedef long long ll;
using Graph = vector< vector<int> >;
vector<bool> seen;

ll	eight_to_ten(string num)
{
	ll	len;
	ll	ans = 0;
	ll	base = 1;

	len = num.size();
	rep(i, len)
	{
		ans += (ll)(num[len - i - 1] - '0') * base;
		base *= 8;
	}
	return (ans);
}

string	ten_to_nine(ll num)
{
	string	base = "012345678";
	string			str;

	while (1)
	{
		str.push_back(base[num % 9]);
		if (num < 9)
			break;
		num /= 9;
	}
	reverse(str.begin(), str.end());
	return (str);
}

string	irekae(string N)
{
	int	size = N.size();
	rep(i, size)
	{
		if (N[i] == '8')
			N[i] = '5';
	}
	return (N);
}

int	main()
{
	string	N;
	ll	K;
	cin >> N >> K;

	ll	num;
	rep(i, K)
	{
		num = eight_to_ten(N);
		N = ten_to_nine(num);
		N = irekae(N);
	}
	cout << N << endl;
}
