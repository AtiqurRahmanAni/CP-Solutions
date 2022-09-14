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
#include<cstring>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
#define inf 2e9
typedef long long ll;
typedef unsigned long long ull;
#define line cout<<endl
using namespace std;
int fy[] = {0, 0, 1, -1};
int fx[] = { -1, 1, 0, 0};
void printVec(vector<int>&vec)
{
    for(auto x : vec)
    {
        cout<<x<<' ';
    }
    line;
}
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
    clock_t start, end;
    start = clock();
#endif

  int n, m;
  cin>>n>>m;

  vector<int>a(n);
  vector<int>b(m);

  for(auto &x : a)
  {
    cin>>x;
  }
  for(auto &x : b)
  {
    cin>>x;
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  // printVec(a);
  // printVec(b);
  int mini = 2e9;
  for(auto x: a)
  {
    int ans = lower_bound(b.begin(), b.end(), x) - b.begin();
    if(ans == m)
    {
        mini = min(mini, abs(x - b[m-1]));
    }
    else if(ans == 0)
    {
        mini = min(mini, abs(x - b[0]));
    }
    else
    {
        mini = min({mini, abs(x - b[ans-1]), abs(x - b[ans])});
    }
  }
  cout<<mini<<endl;



#ifndef ONLINE_JUDGE
    end = clock();
    printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
    return 0;
}