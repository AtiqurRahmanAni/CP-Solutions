#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n,i,j,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<int>a1,a2;
        int pos[m+2];
        for(i=0; i<n; i++)
        {
            cin>>x;
            a1.push_back(x);
            a2.push_back(x);
        }
        for(i=0; i<m; i++)
        {
            cin>>pos[i];
            pos[i]--;
        }
        sort(a2.begin(),a2.end());
        while(1)
        {
            int flag=0;
            for(i=0;i<m;i++)
            {
                if(a1[pos[i]]>a1[pos[i]+1])
                {
                    swap(a1[pos[i]],a1[pos[i]+1]);
                    flag=1;
                }
            }
            if(flag==0)
                break;
        }
        if(a1==a2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
 
    }
    return 0;
}