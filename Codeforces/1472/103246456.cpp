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
 cin>>t;
 while(t--)
 {
  int n,x;
  cin>>n;
  int one=0,two=0,sumone=0,sumtwo=0;
  for(int i=1;i<=n;i++)
  {
   cin>>x;
   if(x==1)
   {
    one++;
    sumone++;
   }
   else
   {
    two++;
    sumtwo+=2;
   }
  }
  if(one==0 and two%2==0)
  {
   cout<<"YES\n";
  }
  else if(one%2==0 and two==0)
  {
   cout<<"YES\n";
  }
  else if(one==two*2)
  {
   cout<<"YES\n";
  }
  else if(one%2==0 and two%2==0  and one==two) 
  {
   cout<<"YES\n";
  }
  else if(sumone%2==0 and sumtwo%2==0 and sumone!=0 and sumtwo!=0)
  {
   cout<<"YES\n";
  }
  else
  {
   cout<<"NO\n";
  }
 }
 
#ifndef ONLINE_JUDGE
 end = clock();
 printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
 return 0;
}