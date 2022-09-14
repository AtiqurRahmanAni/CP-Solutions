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
bool check(int sz, ll n, vector<vector<ll>>&vec)
{
	int freq[32] = {0};
	for (int i = 0; i < sz; i++)
	{
		int power = 4;
		int num = 0;
		for (int j = 0; j < 5; j++)
		{
			if (vec[i][j] >= n)
			{
				num += (1 << power);
			}
			power--;
		}
		freq[num]++;
	}
	// cout << "n" << " " << n << endl;
	// for (int i = 0; i <= 31; ++i)
	// {
	// 	cout << freq[i] << " ";
	// }
	// line;
	for (int i = 0; i <= 31; i++)
	{
		if (freq[i] > 0)
		{
			freq[i]--;
			for (int j = 0; j <= 31; j++)
			{
				if (freq[j] > 0)
				{
					freq[j]--;
					for (int k = 0; k <= 31; k++)
					{
						if (freq[k] > 0)
						{
							//cerr<<"Here "<<freq[i]<<" "<<freq[j]<<" "<<freq[k]<<endl;
							if ((i | j | k) == 31)
								return true;
						}
					}
					freq[j]++;
				}
			}
			freq[i]++;
		}
	}
	return false;
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
	vector<vector<ll>>vec(n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> x;
			vec[i].push_back(x);
		}
	}
	ll low = 0, high = 1e9 + 5;
	ll mid = 0;
	while (low < high)
	{
		mid = (low + high) >> 1;
		if (check(n, mid, vec))
		{
			cerr << "mid " << mid << endl;
			low = mid + 1;
		}
		else
			high = mid;
	}
	//check(n,4,vec);
	cout << low - 1 << endl;
	return 0;
}
