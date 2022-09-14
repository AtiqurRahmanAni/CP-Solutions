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
  string s1,s2;
  cin>>s1>>s2;
  int bestmatch = 0;
  int sz1=s1.size();
  int sz2=s2.size();
  //cerr<<sz1<<endl;
  if(sz1>sz2)
  {
   swap(s1,s2);
   swap(sz1,sz2);
  }
  for(int i=1;i<=sz1;i++)
  {
   for(int j=0;j<=sz1-i;j++)
   {
    int match = 0;
    string temp = s1.substr(j,i);
    //cout<<temp<<endl;
    for(int k=0;k<=sz2-i;k++)
    {
     if(s2.substr(k,i)==temp)
     {
      //cout<<temp<<" "<<s2.substr(k,i)<<endl;
      match=i;
     }
    }
    bestmatch = max(bestmatch,match);
   }
  }
  //cerr<<bestmatch<<endl;
  cout<<(sz1-bestmatch)+(sz2-bestmatch)<<endl;
 }
 return 0;
}