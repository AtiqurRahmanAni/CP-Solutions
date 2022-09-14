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
 
 int t;
 cin >> t;
 while (t--)
 {
  int n;
  cin >> n;
  vector<int> vec(n + 2);
  bool ara[n + 2];
  for (int i = 0; i < n + 2; i++)
  {
   cin >> vec[i];
   ara[i] = false;
  }
  sort(vec.begin(), vec.end());
  ll sum = 0;
  for (int i = 0; i <= n; i++)
  {
   sum += vec[i];
   ara[i] = true;
  }
  // cout<<sum<<endl;
  int l = 0, r = n;
  bool flag = false;
  for (int i = 0; i <= n; i++)
  {
   if ((sum - vec[i]) == vec[n + 1])
   {
    ara[i] = false;
    flag = 1;
    break;
   }
  }
  if (flag)
  {
   for (int i = l; i <= r; i++)
   {
    if (!ara[i])
     continue;
    cout << vec[i] << " ";
   }
   line;
  }
  else
  { if ((sum - vec[n]) == vec[n])
   {
    for (int i = 0; i < n; i++)
    {
     cout << vec[i] << " ";
    }
    line;
   }
   else
   {
    cout << -1 << endl;
   }
  }
 }
 
#ifndef ONLINE_JUDGE
 end = clock();
 printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
 return 0;
}