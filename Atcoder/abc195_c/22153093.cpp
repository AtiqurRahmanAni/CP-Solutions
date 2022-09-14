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

	ll n;
	cin>>n;
	string s;
	s=to_string(n);
	int sz=s.size();
	if(sz<=3)
	{
		cout<<0<<endl;
	}
	else
	{
		int maxneed;
		if(sz%3==0)
			maxneed=sz/3-1;
		else
			maxneed=sz/3;
		ll ten=1000;
		ll ans=0;
		int gg=0;
		while(to_string(ten).size()<sz)
		{
			gg++;
			if(gg==3)
			{
				ans+=1;
				gg=0;
			}
			int comma=(int)(to_string(ten).size());
			if(comma%3==0)
				comma=comma/3-1;
			else
				comma/=3;
			ll prev=ten;
			ten*=10;
			cerr<<ten<<endl;
			ans+=((ten-prev)*comma);
		}
		ll temp=powl(10,sz-1);
		cout<<ans+((n-temp)*maxneed+1)<<endl;
		// cerr<<n-temp<<endl;
	}
	return 0;
}
