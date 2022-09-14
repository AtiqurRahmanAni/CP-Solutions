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

  int a, b;
  cin>>a>>b;

  if(a>0 and b == 0)
  {
    cout<<"Gold\n";
  }
  else if(a == 0 and b > 0)
  {
    cout<<"Silver\n";
  }
  else if(a>0 and b > 0)
  {
    cout<<"Alloy\n";
  }
  

#ifndef ONLINE_JUDGE
    end = clock();
    printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
    return 0;
}