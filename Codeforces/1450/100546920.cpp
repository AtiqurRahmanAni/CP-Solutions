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
#define line cout<<endl
using namespace std;
int distance(int x1, int y1, int x2, int y2)
{
 return abs(x1 - x2) + abs(y1 - y2);
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
  int a, b,k;
  int n;
  cin >> n>>k;
  vector<pair<int, int>>vec;
  for (int i = 1; i <= n; i++)
  {
   cin >> a >> b;
   vec.push_back({a, b});
  }
  int flag=0;
  for (int i = 0; i < n; i++)
  {
   flag=0;
   for (int j = 0; j < n; j++)
   {
    if(i==j)
     continue;
    if(distance(vec[i].first, vec[i].second, vec[j].first, vec[j].second)>k)
    {
     flag=1;
     break;
    }
   }
   if(flag==0)
    break;
  }
  if (flag == 0)
  {
   cout << 1 << endl;
  }
  else
   cout << -1 << endl;
 }
 
 
 
 
 
#ifndef ONLINE_JUDGE
 end = clock();
 printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
 return 0;
}