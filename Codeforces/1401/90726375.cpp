#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,mini,x,flag;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v1,v2;
        mini=INT_MAX;
        flag=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            v1.push_back(x);
            v2.push_back(x);
            if(x<mini)
                mini=x;
 
        }
        sort(v2.begin(),v2.end());
        for(i=0;i<n;i++)
        {
            if(v1[i]!=v2[i])
            {
                if(v1[i]%mini!=0)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}