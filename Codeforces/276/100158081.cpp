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
int main()
{
 fastIO
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif
 
 
 int n, k, a, b;
 cin >> n >> k;
 int maxi = -2e9;
 for (int i = 1; i <= n; i++)
 {
  cin >> a >> b;
  if (b > k and a - (b - k) > maxi)
  {
   maxi = a - (b - k);
  }
  else if (b<=k and maxi<a)
  {
   maxi = a;
  }
 }
 cout << maxi << endl;
 return 0;
}