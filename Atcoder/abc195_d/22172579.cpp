#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include<set>
#include<iterator>
#include <map>
#include<cmath>
#include <list>
#include<string>
#include <stdlib.h>
#include<ctime>
#include<cstring>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define line cout<<'\n'
typedef long long ll;
using namespace std;
vector<long double>roots1;
void printVec(vector<long double>&v)
{
	int sz = v.size();
	for (long double x : v)
	{
		cout << x << " ";
	}
	line;
}
void printVec(vector<ll>&v)
{
	int sz = v.size();
	for (ll x : v)
	{
		cout << x << " ";
	}
	line;
}
void printVec(vector<vector<long double>>&vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec[i].size(); j++)
		{
			cout << vec[i][j] << " ";
		}
		line;
	}
	line;
}
void print(vector<pair<double, double>>&vec)
{
	int sz = vec.size();
	for (int i = 1; i < sz; i++)
	{
		cout << vec[i].first << " " << vec[i].second << endl;
	}
	line;
}
int main()
{
	fastIO
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, m, q;
	cin >> n >> m >> q;
	ll a, b;
	vector<pair<ll, ll>> vec;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		vec.push_back({b, a});
	}
	sort(vec.rbegin(), vec.rend());
	vector<ll> vec1(m);
	for (ll &x : vec1)
	{
		cin >> x;
	}

	int l, r;
	while (q--)
	{
		ll ans = 0;
		cin >> l >> r;
		l--;
		r--;
		vector<bool>track(n, false);
		vector<bool>track1(m, false);
		for (int j = 0; j < n; j++)
		{
			if (track[j] == true)
				continue;
			// if (vec[j].second <= vec1[i])
			// {
			// 	ans += vec[j].first;
			// 	track[j] = true;
			// 	break;
			// }
			ll mini = 2e18, pos = -1;
			for (int i = 0; i < m; i++)
			{
				if (i == l)
					i = r + 1;
				if (i == m)
					break;
				if (track1[i] == true)
					continue;
				if (abs(vec[j].second - vec1[i]) < mini and vec[j].second <= vec1[i])
				{
					mini = abs(vec[j].second - vec1[i]);
					pos = i;
				}
			}
			cerr << vec[j].first << " " << vec[j].second << endl;
			if (pos != -1)
			{
				ans += vec[j].first;
				track[j] = true;
				track1[pos] = true;
			}
		}

		cout << ans << endl;
	}
	return 0;
}
