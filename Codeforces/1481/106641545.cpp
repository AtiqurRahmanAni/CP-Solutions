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
  int n, k;
  cin >> n >> k;
  // if(n==1)
  // {
  //  cout<<-1<<endl;
  //  continue;
  // }
  int maxiHeight = 0;
  vector<int>vec(n + 1, 0);
  for (int i = 1; i <= n; i++)
  {
   cin >> vec[i];
   maxiHeight = max(maxiHeight, vec[i]);
  }
  int pos = -1;
  int flag = 0;
  int i;
  while (k--)
  {
   flag = 0;
   for (i = 2; i <= n; i++)
   {
    if (vec[i] > vec[i - 1])
    {
     flag = 1;
     vec[i - 1]++;
     pos = i - 1;
     break;
    }
    if (flag == 0 and i == n)
    {
     break;
    }
   }
   if (flag == 0 and i == n)
   {
    break;
   }
   //print(vec);
  }
  //cout << k << endl;
  if (k >= 0)
  {
 
   cout << -1 << endl;
  }
  else
  {
   cout << pos << endl;
  }
 }
 
 
#ifndef ONLINE_JUDGE
 end = clock();
 printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
 return 0;
}