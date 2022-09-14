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
	int a[n],b[n];
	int flag1=0,flag2=0;
	int mini=2e5;
	int maxi=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		maxi=max(maxi,a[i]);
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		mini=min(mini,b[i]);
	}
	int aa=-1,bb=2e5;
	for(int i=0;i<n;i++)
	{
		if(a[i]>aa)
			aa=a[i];
		if(b[i]<bb)
			bb=b[i];
		if(b[i]<maxi)
			flag1=1;
		if(a[i]>mini)
			flag2=1;
	}
	//cerr<<aa<<" "<<bb<<endl;
	if(flag1 and flag2)
	{
		//cerr<<maxi<<" "<<mini;
		cout<<0<<endl;
	}
	else
		cout<<bb-aa+1<<endl;

#ifndef ONLINE_JUDGE
	end = clock();
	printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
	return 0;
}