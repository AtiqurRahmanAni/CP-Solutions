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
    while(t--)
    {
        int n;
        cin>>n;
        int row=ceil(sqrt(n));
        int maxEli=row*row;
        int diagEli=maxEli-row+1;
//        cout<<row<<endl;
//        cout<<diagEli<<endl;
        int r,c;
        if(n==1)
        {
            cout<<1<<" "<<1<<endl;
            continue;
        }
        if(n==2)
        {
            cout<<1<<" "<<2<<endl;
            continue;
        }
        if(n<diagEli)
        {
            r=row-(diagEli-n);
            c=row;
        }
        else if(n>diagEli)
        {
            r=row;
            c=maxEli-n+1;
        }
        else
        {
            c=r=row;
        }
        cout<<r<<" "<<c<<endl;
    }
 
#ifndef ONLINE_JUDGE
    end = clock();
    printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
    return 0;
}