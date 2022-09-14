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
#include<deque>
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


	string s;
	cin >> s;
	deque<char>ans;
	bool rear = true;
	for (char ch : s)
	{
		if (ch == 'R')
		{
			rear = !rear;
		}
		else
		{
			if (rear)
			{
				ans.push_back(ch);
				if (ans.size() >= 2)
				{
					char a = ans.back();
					ans.pop_back();
					char b = ans.back();
					ans.pop_back();
					if (a != b)
					{
						ans.push_back(b);
						ans.push_back(a);
					}
				}
			}
			else
			{
				ans.push_front(ch);
				if (ans.size() >= 2)
				{
					char a = ans.front();
					ans.pop_front();
					char b = ans.front();
					ans.pop_front();
					if (a != b)
					{
						ans.push_front(b);
						ans.push_front(a);
					}
				}
			}
		}
	}
	// if (ans.size())
	//cout << rear << endl;
	while (!ans.empty())
	{
		if (!rear)
		{
			cout << ans.back();
			ans.pop_back();
		}
		else
		{
			cout << ans.front();
			ans.pop_front();
		}
	}
	return 0;
}
