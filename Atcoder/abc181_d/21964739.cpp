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


	string s;
	ll n;
	cin >> s;
	int sz=s.size();
	if(sz<=2)
	{
		string s1=s;
		reverse(s1.begin(), s1.end());
		if(stoi(s)%8==0 or stoi(s1)%8==0)
		{
			cout<<"Yes\n";
		}
		else
		{
			cout<<"No\n";
		}
	}
	else
	{
		bool flag=false;
		vector<int>freq(10,0);
		for(int i=0;i<sz;i++)
		{
			freq[s[i]-'0']++;
		}
		for(int i=104;i<1000;i+=8)
		{
			int temp=i;
			flag=false;
			vector<int> freq1(10,0);
			while(temp!=0)
			{
				freq1[temp%10]++;
				temp/=10;
			}
			for(int j=0;j<10;j++)
			{
				if(freq[j]<freq1[j])
				{
					flag=true;
					break;
				}
			}
			if(!flag)
			{
				cout<<"Yes\n";
				break;
			}
		}
		if(flag)
		{
			cout<<"No\n";
		}
	}
	return 0;
}
