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
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
ull gcd(ull a, ull b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

ull findlcm(int arr[], int n)
{
	// Initialize result
	ull ans = (ull)arr[0];

	// ans contains LCM of arr[0], ..arr[i]
	// after i'th iteration,
	for (int i = 1; i < n; i++)
		ans = ((((ull)arr[i] * ans)) /
		       (gcd((ull)arr[i], ans)));

	return ans;
}
int main()
{
	fastIO
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int ara[n - 1];
	for (int i = 2; i <= n; i++)
	{
		ara[i - 2] = i;
	}
	ull ans = findlcm(ara, sizeof(ara) / sizeof(int)) + 1;
	// for(int i=2;i<=n;i++)
	// {
	// 	cout <<ans%i<< endl;
	// }
	cout << ans<< endl;

	return 0;
}