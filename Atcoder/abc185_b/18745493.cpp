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
#define inf 2e5
typedef long long ll;
typedef unsigned long long ull;
#define line cout<<'\n'
using namespace std;
int fy[] = {0, 0, 1, -1};
int fx[] = { -1, 1, 0, 0};
int main()
{
	fastIO
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	clock_t start, end;
	start = clock();
#endif

	int n, m, t;
	cin >> n >> m >> t;
	int charge = 0;
	int a, b;
	int prev = 0;
	int flag=0;
	m--;
	cin>>a>>b;
	charge = n-a;
	if(charge<=0)
		flag=1;
	prev=b;
	charge+=(b-a);
	if(charge>n)
		charge = n;
	while (m--)
	{

		cin >> a >> b;
		charge-=(a-prev);
		if(charge<=0)
			flag=1;
		prev = b;
		charge+=(b-a);
		if(charge>n)
			charge = n;
		//cout<<charge<<endl;
	}
	if(t-b>=charge or flag==1)
	{
		cout<<"No\n";
	}
	else
	{
		cout<<"Yes\n";
	}

#ifndef ONLINE_JUDGE
	end = clock();
	printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
	return 0;
}