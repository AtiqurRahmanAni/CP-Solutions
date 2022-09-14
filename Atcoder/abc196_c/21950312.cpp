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
		ll n;
		cin>>n;
		int ans=0;
		int i=0;
		string s;
		while(++i)
		{
			s=to_string(i);
			s+=s;
			if(stoll(s)>n)
				break;
			ans++;
		}
		cout<<ans<<endl;
		return 0;
	}
