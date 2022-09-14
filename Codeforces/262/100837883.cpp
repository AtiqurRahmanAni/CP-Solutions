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
 
 
    int n, k;
    cin >> n>> k;
    vector<int>vec(n);
    int negative = 0;
    int sum=0,mini=inf;
    int sign = 0, miniInd;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        
    }
    sort(vec.begin(), vec.end());
    for(int i=0;i<n;i++)
    {
        sum+=vec[i];
        if(abs(vec[i])<mini)
        {
            mini=abs(vec[i]);
            if(vec[i]<0)
                sign=1;
            else
                sign=0;
            miniInd = i;
        }
    }
    int i=0;
    while(1)
    {
        if(i==n or vec[i]>=0 or k==0)
            break;
        sum-=vec[i];
        vec[i]*=-1;
        sum+=(vec[i]);
        if(miniInd==i)
            sign=0;
        i++;
        k--;
    }
    if(k>0)
    {
        if(sign==1)
        {
            if(k&1)
            {
                sum-=(-mini);
                sum+=mini;
            }
        }
        else
        {
            if(k&1)
            {
                sum-=(mini);
                sum+=(-mini);
            }
        }
    }
    cout<<sum<<endl;
 
 
#ifndef ONLINE_JUDGE
    end = clock();
    printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
    return 0;
}