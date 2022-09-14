#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    int cnt,i,temp;
    ll ans;
    string s;
    cin>>t;
    while(t--)
    {
        cnt=0,ans=0,temp=0;
        cin>>s;
        int sz=s.size();
        for(i=0;i<sz;i++)
        {
            if(s[i]=='+')
                cnt++;
            else
                cnt--;
            if(cnt<temp)
            {
                temp=cnt;
                ans+=(i+1);
            }
 
        }
        cout<<ans+i<<endl;
 
    }
    return 0;
}