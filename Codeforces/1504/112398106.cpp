#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define line cout<<'\n'
using namespace std;
vector<long double>roots1;
void printVec(vector<long double>&v)
{
 int sz = v.size();
 for (long double x : v)
 {
  cout << x << " ";
 }
 line;
}
void printVec(vector<double>&v)
{
 int sz = v.size();
 for (double x : v)
 {
  cout << x << " ";
 }
 line;
}
void printVec(vector<vector<long double>>&vec)
{
 for (int i = 0; i < vec.size(); i++)
 {
  for (int j = 0; j < vec[i].size(); j++)
  {
   cout << vec[i][j] << " ";
  }
  line;
 }
 line;
}
void print(vector<pair<double, double>>&vec)
{
 int sz = vec.size();
 for (int i = 1; i < sz; i++)
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
#endif
 int t;
 cin >> t;
 while (t--)
 {
  string s, s1, ans;
  cin >> s;
  s1.push_back('a');
  s1 += s;
  s.push_back('a');
  int sz = s.size();
  int pos = 0;
  int flag = 0;
  int j = sz - 1;
  for (int i = 0; i < sz / 2; i++)
  {
   if (s[i] == s[j] and s[j] == 'a')
   {
    swap(s[j], s[j - 1]);
    if (s[i] != s[j])
    {
     flag = 1;
     break;
    }
   }
   else if (s[i] != s[j])
   {
    flag = 1;
    break;
   }
   j--;
  }
  // if (!flag)
  // {
  //  j = sz - 1;
  //      for (int i = 0; i < sz / 2; i++)
  //  {
  //   if (s1[i] == s1[j] and s1[i] == 'a')
  //   {
  //    swap(s1[i], s1[i + 1]);
  //    if (s1[i] != s1[j])
  //    {
  //     flag = 1;
  //     ans=s1;
  //     break;
  //    }
  //   }
  //   else if (s1[i] != s1[j])
  //   {
  //    flag = 1;
  //    break;
  //   }
  //  }
  //  j--;
  // }
  if (!flag)
  {
   cout << "NO\n";
  }
  else
  {
   cout << "YES\n";
   cout << s << endl;
  }
 }
 return 0;
}