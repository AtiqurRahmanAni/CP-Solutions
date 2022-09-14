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
void printVec(vector<int>&v)
{
	int sz = v.size();
	for (ll x : v)
	{
		cout << x << " ";
	}
	line;
}
void printVec(vector<vector<int>>&vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec[i].size(); j++)
		{
			cout << vec[i][j] << " ";
		}
		line;
	}
	//line;
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
int h, w;
int ans = 0;
int matrix[16][16];
bool ok()
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (matrix[i][j] == 0)
				return false;
		}
	}
	return true;
}
void solve(int a, int b)
{
	if (a == 0 && b == 0)
	{
		if (ok())
		{
			ans++;
		}
		return;
	}
	int i, j, flag = 0;
	for (int I = 0; I < h; I++)
	{
		for (int J = 0; J < w; J++)
		{
			if (matrix[I][J] == 0)
			{
				i = I;
				j = J;
				flag = 1;
				break;
			}
		}
		if (flag)
			break;
	}
	if (a > 0 && j < w - 1 && matrix[i][j] == 0 && matrix[i][j + 1] == 0)
	{
		matrix[i][j] = 1;
		matrix[i][j + 1] = 1;
		solve(a - 1, b);
		matrix[i][j] = matrix[i][j + 1] = 0;
	}
	if (a > 0 && i < h - 1 && matrix[i][j] == 0 && matrix[i + 1][j] == 0)
	{
		matrix[i][j] = matrix[i + 1][j] = 1;
		solve(a - 1, b);
		matrix[i][j] = matrix[i + 1][j] = 0;
	}
	if (b > 0 && matrix[i][j] == 0)
	{
		matrix[i][j] = 1;
		solve(a, b - 1);
		matrix[i][j] = 0;
	}
	return;
}
int main()
{
	fastIO
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int a, b;
	cin >> h >> w >> a >> b;
	solve(a, b);
	cout << ans << endl;
	return 0;
}
