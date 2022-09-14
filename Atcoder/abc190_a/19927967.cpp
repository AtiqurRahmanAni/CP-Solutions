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
int main()
{
	fastIO
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	clock_t start, end;
	start = clock();
#endif

	
	int a,b,c;
	cin>>a>>b>>c;
	int flag=0;
	if(c==1)
	{
		flag=1;
	}
	while(1)
	{
		if(flag==0)
		{
			flag=1;
			if(a==0)
			{
				cout<<"Aoki\n";
				break;
			}
			a--;
		}
		else 
		{
			flag=0;
			if(b==0)
			{
				cout<<"Takahashi\n";
				break;
			}
			b--;
		}

	}

#ifndef ONLINE_JUDGE
	end = clock();
	printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
	return 0;
}