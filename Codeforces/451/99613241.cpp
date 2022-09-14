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
 cin >> n;
 ll ara[n + 1], b[n + 1];
 for (int i = 1; i <= n; i++)
 {
  cin >> ara[i];
  b[i] = ara[i];
 }
 sort(b + 1, b + n + 1);
 int i, j;
 int f=0;
 for (i = 1; i <= n; i++)
 {
  if (ara[i] != b[i])
  {
   f=1;
   break;
  }
 }
 if(f==0)
  i--;
 f = 0;
 for (j = n; j >= i; j--)
 {
  if (ara[j] != b[j])
  {
   f = 1;
   break;
  }
 }
 if (f == 0)
  j++;
 int l = i;
 int r = j;
 if (i == j)
 {
  cout << "yes\n";
  cout << 1 << " " << 1 << endl;
  return 0;
 }
 int flag = 0;
 int ind=j;
 for (; i <= j; i++)
 {
  if (ara[i] != b[ind])
  {
   flag = 1;
   break;
  }
  ind--;
 }
 if (flag == 0)
 {
  cout << "yes\n";
  cout << l << " " << r << endl;
 }
 else
 {
  cout << "no\n";
 }
 return 0;
}