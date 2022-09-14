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
#include <functional>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
using namespace std;
int fx[]={1,-1,0,0};
int fy[]={0,0,-1,1};
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int i,j,n=4,k;
    string s;
    int ara[4][4]={0};
    for(i=0;i<n;i++)
    {
        cin>>s;
        for(j=0;j<n;j++)
        {
            if(s[j]=='.')
                ara[i][j]=0;
            else
                ara[i][j]=1;
        }
    }
    int flag=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<=2;j++)
        {
            int cnt1=0,cnt0=0;
            for(k=j;k<=j+1;k++)
            {
                if(ara[i][k]==1)
                    cnt1++;
                else
                    cnt0++;
            }
            for(k=j;k<=j+1;k++)
            {
                if(ara[i+1][k]==1)
                    cnt1++;
                else
                    cnt0++;
            }
            // cout<<cnt1<<" "<<cnt0<<endl;
            if((cnt0==3 && cnt1==1) ||(cnt0==1 && cnt1==3) || cnt1==4 || cnt0==4)
            {
                flag=1;
            }
 
        }
    }
    if(flag)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
 
    return 0;
}