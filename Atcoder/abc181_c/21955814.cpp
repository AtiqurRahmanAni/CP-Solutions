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
void printVec(vector<double>&v)
{
	int sz = v.size();
	for (double x : v)
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
	cin >> n;
	vector<pair<int, int>>vec(n);
	map<int, int>x, y;
	for (int i = 0; i < n; i++)
	{
		cin >> vec[i].first;
		cin >> vec[i].second;
		x[vec[i].first]++;
		y[vec[i].second]++;
	}
	// int cntx = 0, cnty = 0;
	// for (auto it = x.begin(); it != x.end(); it++)
	// {
	// 	if (it->second >= 3)
	// 		cntx = 1;
	// }
	// for (auto it = y.begin(); it != y.end(); it++)
	// {
	// 	if (it->second >= 3)
	// 		cnty = 1;
	// }
	// //sort(vec.begin(), vec.end());
	// if (cntx or cnty)
	// {
	// 	cout << "Yes\n";
	// }
	// else
	{
		//cout<<"Hi\n";
		int cntx=0;
		for (int i = 0; i < n - 2; i++)
		{
			for (int j = i + 1; j < n-1; j++)
			{
				for (int k = j + 1; k < n; k++)
				{
					if((vec[j].second-vec[i].second)*(vec[k].first-vec[j].first)==(vec[k].second-vec[j].second)*(vec[j].first-vec[i].first))
					{
						cntx=1;
						i=j=k=n+5;
					}
				}
			}

		}
		if (cntx)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}
