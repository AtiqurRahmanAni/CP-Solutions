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
void printVec(vector<int>&vec)
{
    for(auto x : vec)
    {
        cout<<x<<' ';
    }
    line;
}
vector<int>vec;
void preCalc()
{
    vec.push_back(0);
    int cnt=1;
    int i=1;
    while(true)
    {
        if(i%3==0 || i%10==3)
        {
            i++;
            continue;
        }
        else
        {
            vec.push_back(i);
            cnt++;
        }
        if(cnt==1005)
        {
            break;
        }
        i++;
    }
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
    cin>>t;
    preCalc();
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int diff = abs(a-b);
        int n=diff*2;
        if(diff>=2 && n>=c && n>=a && n>=b)
        {
            if(c+diff>n)
            {
                cout<<abs(c-diff)<<endl;
            }
            else
            {
                cout<<c+diff<<endl;
            }
        }
        else
        {
            cout<<-1<<endl;
        }
 
    }
 
#ifndef ONLINE_JUDGE
    end = clock();
    printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
    return 0;
}