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
#include<iomanip>
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
set<int>st;
const int N = 200001;
bool ara[N + 1];
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
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        vector<pair<ll, ll>>atk(n);
        for (int i = 0; i < n; i++)
        {
            cin >> atk[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> atk[i].second;
        }
        sort(atk.begin(),atk.end());
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if(b<=0)
            {
                break;
            }
            ll need1 = atk[i].second / a;
            ll need2 = b / atk[i].first;
            if(atk[i].second % a)
                need1++;
            if(b % atk[i].first)
                need2++;
            need1 = min(need1,need2);
            b-=need1*atk[i].first;
            atk[i].second-=(a*need1);
        }
        if (atk[n-1].second<=0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
 
 
    }
 
#ifndef ONLINE_JUDGE
    end = clock();
    printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
    return 0;
}