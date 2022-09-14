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
#define inf 2e9
typedef long long ll;
typedef unsigned long long ull;
#define line cout<<endl
using namespace std;
int fy[] = {0, 0, 1, -1};
int fx[] = { -1, 1, 0, 0};
using namespace std;
 
void prnt(int x)
{
    cout << x << endl;
}
 
 
int main()
{
        fastIO
#ifndef ONLINE_JUDGE
   freopen("inputf.txt", "r", stdin);
//    freopen("outputf.txt", "w", stdout);
    clock_t start, end;
    start = clock();
#endif
 
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = min(min(a, b), (a + b) / 4);
 
        cout << ans << endl;
    }
    
    return 0;
 
  
#ifndef ONLINE_JUDGE
    end = clock();
    printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
    return 0;
}