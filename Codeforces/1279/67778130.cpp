#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s,n,i,x;
    vector<int>vec(100005);
    //freopen("test.txt","r",stdin);
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        for(i=0; i<n; i++)
        {
            cin>>vec[i];
        }
        int maxi=0,ans=0,ind=0,flag=0;
        for(i=0; i<n; i++)
        {
            if(s-vec[i]<0)
            {
                if(vec[i]>maxi)
                    ind=i;
                ans=ind+1;
                break;
            }
            else
            {
                s-=vec[i];
                if(vec[i]>maxi)
                {
                    maxi=vec[i];
                    ind=i;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}