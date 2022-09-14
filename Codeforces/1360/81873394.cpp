#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
void solve()
{
    int n,m,i,j,k,flag;
    cin>>n>>m;
    vector<string>vec(n);
    for(i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    string ans=vec[0];
    for(i=0;i<m;i++)
    {
        for(char ch='a';ch<='z';ch++)
        {
            char save=ans[i];
            ans[i]=ch;
            int cnt;
            for(j=0;j<n;j++)
            {
                flag=cnt=0;
                for(k=0;k<m;k++)
                {
                    if(vec[j][k]!=ans[k])
                    {
                        cnt++;
                    }
                }
                if(cnt>1)
                {
                    flag=1;
                    ans[i]=save;
                    break;
                }
            }
            if(flag==0)
                break;
        }
    }
    if(flag==0)
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
 
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}