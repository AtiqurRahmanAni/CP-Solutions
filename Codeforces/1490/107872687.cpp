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
#define inf 2e9
typedef long long ll;
typedef unsigned long long ull;
#define line cout<<endl
using namespace std;
int fy[] = {0, 0, 1, -1};
int fx[] = { -1, 1, 0, 0};
set<int>st;
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
 
        int n;
        cin >> n;
        vector<int>vec(n);
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        int ans = 0;
        for(int i=0;i<n-1;i++)
        {
            int mini=min(vec[i],vec[i+1]);
            int maxi=max(vec[i],vec[i+1]);
            if((double)maxi/mini>2.00)
            {
                while(mini*2<maxi)
                {
                    ans++;
                    mini*=2;
                }
            }
        }
        cout << ans << endl;
 
    }
 
 
#ifndef ONLINE_JUDGE
    end = clock();
    printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
    return 0;
}