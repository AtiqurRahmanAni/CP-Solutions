#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt,n,i;
    string s;
    //freopen("test.txt","r",stdin);
    cin>>t;
    while(t--)
    {
        int maxi=0;
        cin>>n>>s;
 
        for(i=0; i<n-1; i++)
        {
            if(s[i]=='A')
            {
                cnt=0;
                for(int j=i+1; j<s.size(); j++)
                {
                    if(s[j]=='A')
                        break;
                    cnt++;
                }
                if(cnt>maxi)
                    maxi=cnt;
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}
 
 
 
 