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
  int ara[n][n];
  char ch;
  int x1, y1, x2, y2;
  x1 = y1 = -1;
  x2 = y2 = -1;
  for (int i = 0; i < n; i++)
  {
   for (int j = 0; j < n; j++)
   {
    cin >> ch;
    if (ch == '.')
     ara[i][j] = 0;
    else
    {
     ara[i][j] = 1;
     if (x1 == -1 and y1 == -1)
     {
      x1 = i;
      y1 = j;
     }
     else if (x2 == -1 and y2 == -1)
     {
      x2 = i;
      y2 = j;
     }
    }
   }
  }
  //cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
  int x3, y3, x4, y4;
  if(y1==y2)
  {
   if (y1 + 1 < n)
   {
    x3 = x1;
    y3 = y1+1;
    x4 = x2;
    y4 = y2+1;
   }
   else
   {
    x3 = x1;
    y3 = y1-1;
    x4 = x2;
    y4 = y2-1;
   }
  }
  else if(x1==x2)
  {
   if (x1 + 1 < n)
   {
    x3 = x1+1;
    y3 = y1;
    x4 = x2+1;
    y4 = y2;
   }
   else
   {
    x3 = x1-1;
    y3 = y1;
    x4 = x2-1;
    y4 = y2;
   }
  }
  else if (y1 > y2)
  {
   x3 = x1;
   y3 = y2;
   x4 = x2;
   y4 = y1;
  }
  else if (y1 < y2)
  {
   x3 = x2;
   y3 = y1;
   x4 = x1;
   y4 = y2;
  }
  ara[x3][y3] = ara[x4][y4] = 1;
  for (int i = 0; i < n; i++)
  {
   for (int j = 0; j < n; j++)
   {
    if (ara[i][j] == 1)
     cout << "*";
    else
     cout << ".";
   }
   line;
  }
 }
 
 
#ifndef ONLINE_JUDGE
 end = clock();
 printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
 return 0;
}