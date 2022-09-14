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
#include<iomanip>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
#define inf 2e18
typedef long long ll;
typedef unsigned long long ull;
#define line cout<<'\n'
using namespace std;
int fy[] = {0, 0, 1, -1};
int fx[] = { -1, 1, 0, 0};
int ans=0,k;
void print(vector<int>&vec)
{
	int sz = vec.size();
	for (int i = 1; i < sz; i++)
	{
		cout << vec[i] << " ";
	}
	line;
}
void print(vector<pair<int, int>>&vec)
{
	int sz = vec.size();
	for (int i = 0; i < sz; i++)
	{
		cout << vec[i].first << " " << vec[i].second << endl;
	}
	line;
}
int check(vector<pair<int,int>>&condition,vector<int>&temp)
{
	int sz=(int)condition.size();
	int result=0;
	for (int i = 1; i < sz; ++i)
	{
		if(temp[condition[i].first] and temp[condition[i].second])
		{
			result++;
		}
	}
	return result;
}
void solve(int i,vector<pair<int,int>>&condition,vector<pair<int,int>>&people,vector<int>&temp)
{
	if(i>k)
	{
		ans=max(ans,check(condition,temp));
		return;
	}
	temp[people[i].first]++;
	solve(i+1,condition,people,temp);
	temp[people[i].first]--;
	temp[people[i].second]++;
	solve(i+1,condition,people,temp);
	temp[people[i].second]--;
}
int main()
{
	fastIO
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	clock_t start, end;
	start = clock();
#endif


	int n,m;
	cin>>n>>m;
	vector<pair<int,int>>condition(m+1);
	for(int i=1;i<=m;i++)
	{
		cin>>condition[i].first>>condition[i].second;
	}
	cin>>k;
	vector<pair<int,int>>people(k+1);
	vector<int>temp(n+1,0);
	for(int i=1;i<=k;i++)
	{
		cin>>people[i].first>>people[i].second;
	}
	solve(1,condition,people,temp);
	cout<<ans<<endl;



#ifndef ONLINE_JUDGE
	end = clock();
	printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
	return 0;
}