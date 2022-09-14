#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
using namespace std;
int main()
{
    fastIO
    int n,i,j,k,t;
    string s;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int sz=s.size();
        int ans=0;
        queue<char>q1,q2;
        for(i=0;i<sz;i++)
        {
            if(s[i]=='(')
                q1.push(s[i]);
            else if(s[i]=='[')
                q2.push(s[i]);
            else if(s[i]==')')
            {
                if(!q1.empty())
                {
                    q1.pop();
                    ans++;
                }
            }
            else if(s[i]==']')
            {
                if(!q2.empty())
                {
                    q2.pop();
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
 
    return 0;
}