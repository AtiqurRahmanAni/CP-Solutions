#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t,n,i;
    string s;
    cin>>t;
    for(int test=1;test<=t;test++)
    {
        cin>>n>>s;
        int ans=0,left=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                left++;
            }
            else
            {
                if(left>0)
                {
                    left--;
                }
                else
                {
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}