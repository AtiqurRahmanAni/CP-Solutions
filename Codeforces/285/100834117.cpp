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
 
    int n,s,t;
    cin>>n>>s>>t;
    vector<pair<int,int>> vec;
    int x;
    s--;
    t--;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        x--;
        vec.push_back({i,x});
    }   
    int flag=0;
    int stat = s;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(stat==t)
        {
            flag=1;
            break;
        }
        stat = vec[stat].second;
        //cout<<start<<endl;
        ans++;
    }
    if(flag==1)
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
#ifndef ONLINE_JUDGE
    end = clock();
    printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
    return 0;
}