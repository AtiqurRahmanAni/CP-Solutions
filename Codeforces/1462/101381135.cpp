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
#define inf 2e5
typedef long long ll;
typedef unsigned long long ull;
#define line cout<<endl
using namespace std;
int fy[] = {0, 0, 1, -1};
int fx[] = { -1, 1, 0, 0};
int n;
int check(int *ara, int factor)
{
    int sum = 0, j = 0;
    int total=0;
    for (int i = 0; i < n ; i++)
    {
        sum+=ara[i];
        if(sum==factor)
        {
            total += (i-j);
            sum=0;
            j=i+1;
        }
        else if(sum>factor)
        {
            return -1;
        }
    }
    return total;
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
    cin >> t;
    while (t--)
    {
        cin >> n;
        int ara[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ara[i];
            sum += ara[i];
        }
        int ans = n - 1;
        for (int i = 1; i * i <= sum; i++)
        {
            if(sum % i == 0)
            {
                int f1 = sum/i;
                int f2 = i;
                int ff1 = check(ara,f1);
                int ff2 = check(ara,f2);
                if(ff1!=-1)
                    ans = min(ans, ff1);
                if(ff2!=-1)
                    ans = min(ans, ff2);
            }
        }
        cout<<ans<<endl;
    }
 
 
 
 
#ifndef ONLINE_JUDGE
    end = clock();
    printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
    return 0;
}