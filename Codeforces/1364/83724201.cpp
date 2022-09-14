#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
#define SZ 100000
int fx[5]= {0,0,0,-1,1};
int fy[5]= {0,-1,1,0,0};
int main()
{
    int t,n,x,i,j,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ara[n+5];
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        vector<int>vec;
        vec.push_back(ara[0]);
        for(i=1;i<n-1;i++)
        {
            if(ara[i-1]>ara[i] && ara[i]<ara[i+1])
            {
                //cout<<"Yes"<<endl;
                vec.push_back(ara[i]);
            }
            else if(ara[i-1]<ara[i] && ara[i]>ara[i+1])
            {
                //cout<<"No"<<endl;
                vec.push_back(ara[i]);
            }
        }
        vec.push_back(ara[n-1]);
        int sz=vec.size();
        cout<<sz<<endl;
        for(i=0;i<sz;i++)
        {
            cout<<vec[i]<<" ";
        }
        puts("");
    }
    return 0;
}