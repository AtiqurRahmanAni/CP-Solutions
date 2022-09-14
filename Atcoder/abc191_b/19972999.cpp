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
#include<cstring>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
#define inf 2e18
typedef long long ll;
typedef unsigned long long ull;
#define line cout<<endl
using namespace std;
int fy[] = {0, 0, 1, -1};
int fx[] = { -1, 1, 0, 0};
int ara[1001];
int graph[1001][1001];
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
    clock_t start, end;
    start = clock();
#endif

   int n,x,xx;
   vector<int>vec;
   cin>>n>>x;
   for(int i=0;i<n;i++)
   {
       cin>>xx;
       if(xx!=x)
        vec.push_back(xx);
   }
   for(int x:vec)
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
