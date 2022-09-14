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
  int a, b, sz;
  cin >> a >> b;
  sz = a + b;
  string s;
  cin >> s;
  for (int i = 0; i < sz; i++)
  {
   if (s[i] == '1')
    b--;
   else if (s[i] == '0')
    a--;
  }
  // cout << a << " " << b << endl;
  for (int i = 0; i < sz / 2; i++)
  {
   if (s[i] == '0' and s[sz - i - 1] == '?')
   {
    s[sz - i - 1] = '0';
    a--;
   }
   else if (s[i] == '?' and s[sz - i - 1] == '0')
   {
    s[i] = '0';
    a--;
   }
   else if (s[i] == '1' and s[sz - i - 1] == '?')
   {
    s[sz - i - 1] = '1';
    b--;
   }
   else if (s[i] == '?' and s[sz - i - 1] == '1')
   {
    s[i] = '1';
    b--;
   }
   // else if(i==(sz-i-1) and s[i]=='?')
   // {
   //  if(a>0 and a>b)
   //  {
   //   s[i]='0';
   //   a--;
   //  }
   //  else if(b>0 and b>a)
   //  {
   //   s[i]='1';
   //   b--;
   //  }
   // }
  }
  // cout<<s<<endl;
  // cout<<a<<" "<<b<<endl;
  if (a < 0 or b < 0)
  {
   cout << -1 << endl;
   continue;
  }
  // else if(a==0 and b==0)
  // {
  //  cout<<s<<endl;
  //  continue;
  // }
  for (int i = 0; i < sz / 2; i++)
  {
   if (s[i] == s[sz - i - 1] and s[i] == '?')
   {
    if (a > 1)
    {
     s[i] = s[sz - i - 1] = '0';
     a -= 2;
    }
    else if (b > 1)
    {
     s[i] = s[sz - i - 1] = '1';
     b -= 2;
    }
   }
  }
  // cout << a << " " << b << endl;
  // cout << s << endl;
  if (sz % 2 != 0 and s[sz / 2] == '?')
  {
   if (a > 0)
   {
    s[sz / 2] = '0';
    a--;
   }
   else if (b > 0)
   {
    s[sz / 2] = '1';
    b--;
   }
  }
  string s1 = s;
  reverse(s1.begin(), s1.end());
  if (a == 0 and b == 0 and s == s1)
  {
   cout << s << endl;
   continue;
  }
  cout << -1 << endl;
 }
#ifndef ONLINE_JUDGE
 end = clock();
 printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
 return 0;
}