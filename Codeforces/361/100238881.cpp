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
 
 
 int n,k;
 cin>>n>>k;
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
   if(i==j)
   {
    cout<<k<<" ";
   }
   else
   {
    cout<<0<<" ";
   }
  }
  cout<<endl;
 }
 return 0;
}