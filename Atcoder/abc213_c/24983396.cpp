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
set<ll>st;
void precalculate()
{
    for(ll i=1;i<=10000;i++)
    {
        st.insert(i*i*i);
    }
}
bool compare(const pair<int,pair<int, int>>&i, const pair<int,pair<int, int>>&j) 
{ 
    return i.second.first < j.second.first; 
}
bool compare1(const pair<int,pair<int, int>>&i, const pair<int,pair<int, int>>&j) 
{ 
    return i.second.second < j.second.second; 
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

  
  int h, w, n;
  cin>>h>>w>>n;
  vector<pair<int, pair<int, int>>>vec;
  int cnt = 1;
  int x, y;
  for(int i=0;i<n;i++)
  {
    cin>>x>>y;
    vec.push_back({x, {y, cnt}});
    cnt++;
  }

  sort(vec.begin(), vec.end());

   cnt = 1;
   int i;
   for(i=1;i<n;i++)
   {
        if(vec[i-1].first == vec[i].first)
        {
            vec[i-1].first = cnt;
        }
        else
        {
            vec[i-1].first = cnt;
            cnt++;
        }
   }
   vec[i-1].first = cnt;
   sort(vec.begin(), vec.end(), compare);
   cnt = 1;
   for(i=1;i<n;i++)
   {
        if(vec[i-1].second.first == vec[i].second.first)
        {
            vec[i-1].second.first = cnt;
        }
        else
        {
            vec[i-1].second.first = cnt;
            cnt++;
        }
   }
   vec[i-1].second.first = cnt;
  sort(vec.begin(), vec.end(), compare1);

   for(int i=0;i<n;i++)
  {
    cout<<vec[i].first<<' '<<vec[i].second.first<<endl;
  }

   

#ifndef ONLINE_JUDGE
    end = clock();
    printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
    return 0;
}