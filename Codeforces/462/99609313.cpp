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
using namespace std;
int main()
{
 fastIO
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif
 
 
 ull n, k;
 string s;
 cin >> n >> k;
 cin >> s;
 map<char, int>mp;
 for (char x : s)
 {
  mp[x]++;
 }
 vector<int>vec;
 for (auto it = mp.begin(); it != mp.end(); it++)
 {
  vec.push_back(it->second);
 }
 sort(vec.rbegin(), vec.rend());
 ull ans = 0;
 ull cnt = 0,rem=k;
 for (ull x : vec)
 {
  if (x >= k)
  {
   ans += (ull)(k * k);
   break;
  }
  else if(x<rem)
  {
   ans+=(ull)(x*x);
   cnt+=x;
   rem=k-cnt; 
  }
  else
  {
   ans+=(ull)(rem*rem);
   break;
  }
 }
 cout<<ans<<endl;
 return 0;
}