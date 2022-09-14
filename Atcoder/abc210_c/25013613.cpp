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

    int n, k;
    cin>>n>>k;
    vector<int>vec(n);
    for(int &x : vec)
    {
        cin>>x;
    }
    int ans = 0;
    map<int, int>mp;
    for(int i=0;i<k;i++)
    {
        mp[vec[i]]++;
    }
    ans = mp.size();
    for(int i=k;i<n;i++)
    {
        mp[vec[i-k]]--;
//        cout<<vec[i]<<" "<<vec[i-k]<<endl;
        if(mp[vec[i-k]] == 0)
        {
            mp.erase(vec[i-k]);
        }
        mp[vec[i]]++;
        ans = max(ans, (int)mp.size());
    }
    cout<<ans<<endl;

#ifndef ONLINE_JUDGE
    end = clock();
    printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
    return 0;
}