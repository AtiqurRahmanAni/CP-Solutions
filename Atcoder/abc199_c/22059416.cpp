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

	string s,s1,s2;
	int n;
	cin >> n;
	cin >> s;
	int q;
	cin>>q;
	int t,a,b;
	s1=s.substr(0,n);
	s2=s.substr(n,n);
	int first=1;
	while(q--)
	{
		cin>>t>>a>>b;
		a--;
		b--;
		if(t==1)
		{
			if(a>b)
				swap(a,b);
			if(first==1)
			{
				if(a<=n-1 and b<=n-1)
				{
					swap(s1[a],s1[b]);
				}
				else if(a<=n-1 and b>n-1)
				{
					swap(s1[a],s2[b-n]);
				}
				else if(a>n-1 and b>n-1)
				{
					swap(s2[a-n],s2[b-n]);
				}
			}
			else
			{
				if(a<=n-1 and b<=n-1)
				{
					swap(s2[a],s2[b]);
				}
				else if(a<=n-1 and b>n-1)
				{
					swap(s2[a],s1[b-n]);
				}
				else if(a>n-1 and b>n-1)
				{
					swap(s1[a-n],s1[b-n]);
				}
			}
		}
		else
		{
			if(first==1)
				first=2;
			else
				first=1;
		}
	}
	if(first==1)
		cout<<s1<<s2<<endl;
	else
		cout<<s2<<s1<<endl;
	return 0;
}
