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
 
 
 int n;
 int a, b;
 cin >> n;
 vector<int>v1,v2;
 for (int i = 0; i < n; i++)
 {
  cin>>a>>b;
  v1.push_back(a);
  v2.push_back(b);
 }
 int ans=0;
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
   if(i!=j and v1[i]==v2[j])
   {
    ans++;
    break;
   }
  }
 }
 cout<<n-ans<<endl;
 return 0;
}