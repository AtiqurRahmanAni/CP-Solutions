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
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    clock_t start, end;
    start = clock();
#endif
 
 
    int a, b, c;
    cin >> a >> b >> c;
    int flag = 0;
    for (int i = 0; i <= b; i++)
    {
        if (b - i == c - (a - i) and(a - i)>=0)
        {
            cout << i << " " << b - i << " " << a - i << endl;
            flag = 1;
            break;
        }
    }
 
    if (flag == 0)
    {
        cout << "Impossible\n";
    }
 
 
 
 
#ifndef ONLINE_JUDGE
end = clock();
printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
return 0;
}