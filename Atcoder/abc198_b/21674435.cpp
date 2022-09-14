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

	string n;
	cin>>n;
	string n1 = n;
	reverse(n1.begin(),n1.end());
	if(n1==n)
	{
		cout<<"Yes\n";
	}
	else
	{
		string n2="";
		for(int i=n.size()-1;i>=0;i--)
		{
			if(n[i]=='0')
			{
				n2+='0';
			}
			else
			{
				break;
			}
		}
		n2.append(n);
		n1=n2;
		reverse(n1.begin(), n1.end());
		//cout<<n2<<endl;
		if(n1==n2)
		{
			cout<<"Yes\n";
		}
		else
		{
			cout<<"No\n";
		}
	}


#ifndef ONLINE_JUDGE
	end = clock();
	printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
	return 0;
}