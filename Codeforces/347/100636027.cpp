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
#define line cout<<endl
using namespace std;
int fx[] = {0, 0, 2, -2};
int fy[] = { -2, 2, 0, 0};
int main()
{
 fastIO
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 clock_t start, end;
 start = clock();
#endif
 
 
 
 int n;
 cin >> n;
 vector<int>vec(n);
 for (int i = 0; i < n; i++)
 {
  cin >> vec[i];
 }
 sort(vec.begin(), vec.end());
 swap(vec[0],vec[n-1]);
 line;
 for(auto x:vec)
 {
  cout<<x<<" ";
 }
 line;
#ifndef ONLINE_JUDGE
 end = clock();
 printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
 return 0;
}