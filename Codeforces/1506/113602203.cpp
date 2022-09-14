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
  int n,k,i;
  cin>>n>>k;
  string s,s1;
  cin>>s;
  int ans=0,pos=0,pos1=n-1,ans1=0;
  for(i=0;i<n;i++)
  {
   if(s[i]=='*')
   {
    ans++;
    ans1++;
    pos=i;
    pos1=i;
    s[i]='X';
    break;
   }
  }
  while(1)
  {
   int j = min(n-1,i+k);
 
   for(;i<j and s[j]=='.';j--){
 
   }
   if(i==j)
    break;
   ans++;
   i=j;
  }
  cout<<ans<<endl;
  
 }
 
#ifndef ONLINE_JUDGE
 end = clock();
 printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
 return 0;
}