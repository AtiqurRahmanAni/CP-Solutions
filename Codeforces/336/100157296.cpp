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
 
 
 int x, y;
 int x1, x2, y1, y2;
 cin >> x >> y;
 int sum = abs(x) + abs(y);
 if (x > 0 and y > 0)
 {
  cout << 0 << " " << sum << " " << sum << " " << 0 << endl;
 }
 else if (x > 0 and y < 0)
 {
  cout << 0 << " " << -sum << " " << sum << " " << 0 << endl;
 }
 else if (x<0 and y>0)
 {
  cout << -sum << " " << 0 << " " << 0 << " " << sum << endl;
 }
 else if(x<0 and y<0)
 {
  cout<<-sum<<" "<<0<<" "<<0<<" "<<-sum<<endl;
 }
 return 0;
}