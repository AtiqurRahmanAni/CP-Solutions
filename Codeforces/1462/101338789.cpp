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
  if (n < 10)
  {
   cout << n << endl;
  }
  else if (n > 45)
  {
   cout << -1 << endl;
  }
  else
  {
   int ans = 0;
   int sum = 0;
   int flag = 0;
   set<int>st;
   while (sum != n)
   {
    int need = n - sum;
    if (need > 9)
    {
     if (st.count(9) == 0)
     {
      ans = ans * 10 + 9;
      st.insert(9);
      sum+=9;
     }
     else
     {
      for (int i = 8; i >= 1; i--)
      {
       if (st.count(i) == 0)
       {
        ans = ans * 10 + i;
        st.insert(i);
        sum+=i;
        break;
       }
      }
     }
    }
    else
    {
     if (st.count(need) == 0)
     {
      ans = ans * 10 + need;
      st.insert(need);
      sum+=need;
 
     }
     else
     {
      for (int i = 8; i >= 1; i--)
      {
       if (st.count(i) == 0)
       {
        ans = ans * 10 + i;
        st.insert(i);
        sum+=i;
        break;
       }
      }
     }
    }
 
   }
   if (flag == 1)
   {
    cout << -1 << endl;
    continue;
   }
   vector<int>vec;
   while (ans != 0)
   {
    vec.push_back(ans % 10);
    ans /= 10;
   }
   sort(vec.begin(), vec.end());
   for (auto x : vec)
   {
    cout << x;
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