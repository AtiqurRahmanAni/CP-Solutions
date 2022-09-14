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
#define line cout<<endl
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
 
 int n, t;
 char ch;
 cin >> t;
 while (t--)
 {
  cin >> n;
  int ara[n + 1][n + 1];
  vector<int>maxRow(10, -inf);
  vector<int>maxCol(10, -inf);
  vector<int>minRow(10, inf);
  vector<int>minCol(10, inf);
  for (int i = 0; i < n; i++)
  {
   for (int j = 0; j < n; j++)
   {
    cin >> ch;
    int num = ch - '0';
    ara[i][j] = num;
    maxRow[num] = max(maxRow[num], i);
    maxCol[num] = max(maxCol[num], j);
    minRow[num] = min(minRow[num], i);
    minCol[num] = min(minCol[num], j);
   }
  }
  int res1, res2;
  vector<int> ans(10, 0);
  for (int i = 0; i < n; i++)
  {
   for (int j = 0; j < n; j++)
   {
    int num = ara[i][j];
    res1 = max(j - minCol[num], maxCol[num] - j) * max(i, n - i - 1);
    res2 = max(i - minRow[num], maxRow[num] - i) * max(j, n - j - 1);
    ans[num] = max(ans[num], max(res1, res2));
   }
  }
  for (int i = 0; i <= 9; i++)
  {
   cout << ans[i] << " ";
  }
  line;
 }
 
 
#ifndef ONLINE_JUDGE
 end = clock();
 printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
 return 0;
}