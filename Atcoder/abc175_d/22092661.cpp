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
bool visit[5005];
ll p[5005], c[5005];
vector<ll>dp;
void dfs(int i,ll total)
{
	if(visit[i])
		return;
	total+=c[i];
	visit[i]=true;
	dp.push_back(total);
	dfs(p[i],total);

}
int main()
{
	fastIO
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll n, k;
	cin >> n >> k;
	// vector<vector<ll>>dp(n+5);
	for (int i = 1; i <= n; i++)
	{
		cin >> p[i-1];
		p[i-1]--;
	}
	for (int i = 1; i <= n; i++)
	{
		cin >> c[i-1];
	}

	// for (int i = 1; i <= n; i++)
	// {
	// 	int j = p[i];
	// 	ll prev = 0;
	// 	while (1)
	// 	{
	// 		dp[p[i]].push_back(prev + c[j]);
	// 		prev = dp[p[i]].back();
	// 		if (p[j] == p[i])
	// 			break;
	// 		j = p[j];
	// 	}
	// 	printVec(dp[p[i]]);
	// }
	ll ans = (-1e18);
	for (int i = 1; i <= n; i++)
	{
		memset(visit,false,sizeof(visit));
		dfs(i-1,0);
		//printVec(dp);
		int sz = dp.size();
		if (dp.back() > 0 and k>=sz)
		{
			ll cycle = (ll)k / sz;
			ll rem = (ll)k % sz;
			ll maxi = (-1e18);
			for (int j = 0; j < sz; j++)
			{
				maxi = max(dp[j], maxi);
			}
			ans = max(ans, (cycle - 1) * dp.back() + maxi);
			maxi = (-1e18);
			for (int j = 0; j < rem; j++)
			{
				maxi = max(dp[j], maxi);
			}
			ans = max(ans, cycle * dp.back() + maxi);
			//cerr<<ans<<endl;
		}
		else
		{
			for (int j = 0; j < min((ll)sz,k); j++)
			{
				ans = max(dp[j], ans);
			}
		}
		dp.clear();
	}
	cout << ans << endl;
	return 0;
}
