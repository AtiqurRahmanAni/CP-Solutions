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
int main()
{
	fastIO
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	clock_t start, end;
	start = clock();
#endif


	int n;
	cin>>n;
	int ara[n];
	int x=0,y=0;
	for(int i=0;i<n;i++)
	{
		cin>>ara[i];
	}
	int mini=2e9;
	for(int i=0;i<1<<(n-1);i++)
	{
		vector<int> v;
		y=0;
		for(int j=0;j<n;j++)
		{
			y|=ara[j];
			if(i&(1<<j))
			{
				v.push_back(y);
				y=0;
			}
		}
		if(y)
			v.push_back(y);
		x=0;
		for(int xx : v)
		{
			x^=xx;
		}
		mini=min(x,mini);
	}

	cout<<mini<<endl;


#ifndef ONLINE_JUDGE
	end = clock();
	printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
	return 0;
}