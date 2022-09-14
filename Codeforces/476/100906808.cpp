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
#define inf 2e5
typedef long long ll;
typedef unsigned long long ull;
#define line cout<<endl
using namespace std;
int fy[] = {0, 0, 1, -1};
int fx[] = { -1, 1, 0, 0};
int NCR(int n,int r)
{
 int f1=1,f2=1,f3=1;
 for(int i=2;i<=n;i++)
 {
  f1*=i;
  if(i<=r)
  {
   f2*=i;
  }
  if(i<=n-r)
  {
   f3*=i;
  }
 }
 return (f1/(f2*f3));
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
 
 string s1,s2;
 cin>>s1>>s2;
 int need = 0;
 for(char x:s1)
 {
  if(x=='+')
   need++;
 }
 int curr = 0;
 int gap = 0;
 for(char x:s2)
 {
  if(x=='+')
   curr++;
  else if(x=='?')
   gap++;
 }
 // if(curr==need)
 // {
 //  cout<<"1.000000000000\n";
 // }
 if(gap<abs(need-curr) || curr>need)
 {
  cout<<"0.000000000000\n";
 }
 else
 {
  int temp = need - curr;
  int res = NCR(gap,temp);
  int x = powl(2,gap);
  printf("%.12f\n",res/(double)x);
 }
 
#ifndef ONLINE_JUDGE
 end = clock();
 printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
 return 0;
}