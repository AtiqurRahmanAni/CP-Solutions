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
    int x,n,i,inp;
    cin>>x>>n;
    int ara[n];
    set<int>st;
    for(i=0; i<n; i++)
    {
        cin>>inp;
        st.insert(inp);
    }
    vector<int>vec;
    int ans,temp,t1=INT_MAX;
    for(i=-101; i<=101; i++)
    {
        if(st.count(i)==false)
        {
            temp=abs(i-x);
            if(temp<t1)
            {
                t1=temp;
                ans=i;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
