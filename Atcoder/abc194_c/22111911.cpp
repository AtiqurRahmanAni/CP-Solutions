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

	int n;
	ll x;
	cin >> n;
	ll ans = 0;
	map<ll, ll> mp;
	int ara[n];
	set<pair<ll,ll>>st;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		mp[x]++;
	}
	for (auto it = mp.begin(); it != mp.end(); it++)
	{
		auto it1 = it;
		it1++;
		for (; it1 != mp.end(); it1++)
		{
			if(st.count({it->first,it1->first}) or st.count({it1->first,it->first}))
				continue;
			ans += (((it->first - it1->first) * (it->first - it1->first)) * it->second*it1->second);
			// if (min(it->second, it1->second) > 1)
			// {
			// 	ans += (((it->first - it1->first) * (it->first - it1->first)) * min(it->second, it1->second));
			// }
			st.insert({it->first,it1->first});
		}
	}
	cout << ans << endl;
	return 0;
}
