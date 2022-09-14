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
bool ara[N+1];
void prime()
{
    
    for(int i=2;i<=sqrt(N);i++)
    {
        if(ara[i]==false)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                ara[j]=true;
            }
        }
    }
    ara[1]=true;
    for(int i=2;i<=N;i++)
    {
        if(!ara[i])
        {
            st.insert(i);
            //cout<<i<<" ";
        }
    }
    //line;
}
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
    prime();
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        auto a=st.lower_bound(d+1);
        int aa=*a;
        auto b=st.lower_bound(d+aa);
        int bb=*b;
        cout<<aa*bb<<endl;
    }
 
#ifndef ONLINE_JUDGE
    end = clock();
    printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
    return 0;
}